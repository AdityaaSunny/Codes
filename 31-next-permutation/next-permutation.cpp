class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        vector<int> ans;
        vector<int> ans2;
        for(auto& i : nums){
            ans.push_back(i);
            ans2.push_back(i);
        }
        reverse(ans.begin(),ans.end());
        sort(ans2.begin(),ans2.end());
        if(ans==ans2){
            sort(nums.begin(),nums.end());
        }
        else{
            while(next_permutation(nums.begin(),nums.end())){
                break;
            }
        }
    }
   
};