class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int,greater<int>> ans;
        for(int i=0;i<nums.size();i++) {
            ans.insert(nums[i]);
        }
        for(auto i: ans){
            nums.insert(nums.begin(),i);
        }
        return ans.size();
    }
};