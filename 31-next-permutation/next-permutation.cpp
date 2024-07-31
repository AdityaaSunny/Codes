class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        vector<int> ans;
        vector<int> anss;
        for(auto i:nums){
            ans.push_back(i);
            anss.push_back(i);
        }
        reverse(ans.begin(),ans.end());
        sort(anss.begin(),anss.end());
        if(ans==anss){
            sort(nums.begin(),nums.end());
        }
        else{
            while(next_permutation(nums.begin(),nums.end())){
                break;
            }
        }
        // reverse(nums.begin() + index + 1, nums.end());
    }
   
};