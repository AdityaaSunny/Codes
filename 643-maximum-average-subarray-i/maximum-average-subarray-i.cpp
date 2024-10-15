class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int currsum=0;
        int y=0;
        int j=k-1;
        int maxsum=INT_MIN;
        for(int i=y;i<=j;i++){
            currsum+=nums[i];
        }
        maxsum=max(maxsum,currsum);
        j++;
        while(j<nums.size()){
            currsum+=nums[j++];
            currsum-=nums[y++];
            maxsum=max(maxsum,currsum);

        }
        double ans= maxsum/(double)k;
        return ans;
    }
};