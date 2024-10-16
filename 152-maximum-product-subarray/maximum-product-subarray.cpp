class Solution {
public:
    int maxProduct(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n = nums.size();
        int minProduct = 1;
        int maxProduct = 1;
        int ans = INT_MIN;
        for(int i=0; i<n; i++){
            if(nums[i] < 0){
                swap(maxProduct, minProduct);
            }
            maxProduct = max(maxProduct*nums[i], nums[i]);
            minProduct = min(minProduct*nums[i], nums[i]);
            ans = max(ans, maxProduct);
        }
        return ans;
    }
};