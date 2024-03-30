class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int pos=0;
        int ans = INT_MIN;
        int sum =0;
        for(auto x: nums){
            pos+= (x>0);
            sum+= x;
            ans=max(ans,sum);
            if(sum<0){
                ans = max(ans,sum);
                sum = 0;
            }
        }
        
        return ans;
    }
};