class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // int n = nums.size(), index = -1;
        // for(int i=n-2; i>=0; i--){
        //     if(nums[i] < nums[i+1]){
        //         index = i;
        //         break;
        //     }
        // }
        // for(int i=n-1; i>=index && index != -1; i--){
        //     if(nums[i] > nums[index]){
        //         swap(nums[i], nums[index]);
        //         break;
        //     }
        // }
        vector<int> ans;
        vector<int> anss;
        for(auto i:nums){
            ans.push_back(i);
            anss.push_back(i);
        }
        reverse(ans.begin(),ans.end());
        sort(anss.begin(),anss.end());
        if(ans==anss){
            int j=0;
            for(auto &i:nums){
                i=ans[j];
                j++;
            }
        }
        else{
            while(next_permutation(nums.begin(),nums.end())){
                break;
            }
        }
        // reverse(nums.begin() + index + 1, nums.end());
    }
   
};