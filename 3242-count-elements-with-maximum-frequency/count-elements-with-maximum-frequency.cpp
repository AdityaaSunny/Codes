class Solution {
public:
    int maxFrequencyElements(std::vector<int>& nums) {
        int mx = 0;
       unordered_map<int , int> mp;
       for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
        mx = max(mx , mp[nums[i]]);
       } 
       int res =0;
       for(auto m:mp){
        if(m.second==mx){
            res += mx;
        }
       }
       return res;
    }
};