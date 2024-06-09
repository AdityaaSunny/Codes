class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
     int res = 0, mp[k];
        memset(mp, 0, sizeof(mp));
        mp[0] = 1;
        int sum = 0;
        for(auto& num : nums)
        {
            sum += num;
            int rem = (sum % k + k) % k;
            res += mp[rem]++;
        }
        return res;
        
    }
};