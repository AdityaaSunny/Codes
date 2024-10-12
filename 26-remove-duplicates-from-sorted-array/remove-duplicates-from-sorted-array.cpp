class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
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