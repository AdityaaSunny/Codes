class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i=0;
        int n= nums.size();
        for(int i=0;i<n;++i){
            int rsum=0; 
            int lsum=0;
            for(int j=0;j<i;j++){
                lsum += nums[j];
            }
            for(int j=i+1;j<n;j++){
                rsum += nums[j];
            }
            if(lsum==rsum) {
                return i;
            }
            
        }
        return -1;

    }
};