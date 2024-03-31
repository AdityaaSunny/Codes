class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size(), ans = INT_MAX;
        for(int i = 0 ; i < n ; i++){
            int temp = 0;
            for(int j = i; j < n ; j++){
                temp = temp | nums[j];
                if(temp >= k){
                    ans = min(ans, j-i+1);
                }
            }
        }
        if(ans == INT_MAX) return -1;
        else return ans;
    }
};