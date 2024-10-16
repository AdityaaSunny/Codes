class Solution {
public:
    void ans(int ind, int target,vector<int>& arr,vector<vector<int>>& res, vector<int>& ds ){
        if(ind==arr.size()){
            if(target==0){
                res.push_back(ds);
            }
            return;
        }
        if(arr[ind]<=target){
            ds.push_back(arr[ind]);
            ans(ind,target-arr[ind],arr, res,ds);
            ds.pop_back();
        }
        ans(ind+1, target, arr,res,ds);
    }


    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>> ans1;
         vector<int> ds;

         ans(0,target,candidates,ans1,ds);
         return ans1;
    }
};