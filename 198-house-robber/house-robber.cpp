
class Solution {
public:
    int n;
    vector<int> v;
    int dp[105];

    int recg(int idx) {

        if (idx >= n)
            return 0;

        if (dp[idx] != -1)
            return dp[idx];

        return dp[idx] = max(
                v[idx] + recg(idx + 2), // take this element, so will skip the next element
                0 + recg(idx + 1)// not take this element, so will take the next element 
            );
    }

    int rob(vector<int>& nums) {

        memset(dp, -1, sizeof(dp));

        v = nums;
        n = v.size();
        return recg(0);
    }
};