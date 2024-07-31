class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>st;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        st.insert(nums);
        while(next_permutation(nums.begin(),nums.end())){
            st.insert(nums);
        }
        
        for(auto i: st){
            ans.push_back(i);
        }
        return ans;
    }
};