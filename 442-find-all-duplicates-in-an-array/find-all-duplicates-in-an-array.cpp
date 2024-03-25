class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        map<int,int> mp;
        for(int i: nums){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.second>1){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};