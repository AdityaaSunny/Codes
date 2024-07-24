class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int j=k-1;
        int currSum=0;
        for(int y=i;y<=j;y++){
            currSum += nums[y];
        }
        int maxSum=currSum;
        j++;
        while(j<nums.size()){
            currSum -= nums[i++];
            currSum += nums[j++];
            maxSum=max(maxSum,currSum);
        }      
        double MaxAvg= maxSum/(double)k;
        return MaxAvg;
    }
};