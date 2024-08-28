class Solution {
public:
    int search(vector<int>& arr, int target) {
        int low=0;
        int high = arr.size()-1;
        while(low<=high){
            int mid = (high+low)/2;
            if(arr[mid]==target) return mid;
            //left part sorted
            if(arr[low]<=arr[mid]){
                if(target<=arr[mid] && arr[low]<=target){
                    high = mid-1;
                }else{
                    low = mid+1;
                }
            }else{ //right part sorted
                if(arr[mid]<=target && target<=arr[high]){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};