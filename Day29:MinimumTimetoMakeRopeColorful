class Solution {
public:
    int minCost(string clrs, vector<int>& nt) {
        int n = clrs.size(), ans = 0, i = 0;

        while( i < n ){
            int sum = nt[i], maxi = nt[i];
            char cur = clrs[i++];

            while(i<n && clrs[i] == cur ){
                maxi = max(maxi, nt[i]), sum += nt[i++];
            }
            ans += (sum-maxi);
        }
        return ans;
    }
};
