class Solution {
private:
    
    int solveMem(vector<int>& prices,int index,int buy,vector<vector<int>> &dp)
    {
             if(index==prices.size()) return 0;
             int profit=0;

             if(dp[index][buy]!=-1) return dp[index][buy];

             if(buy)
             {
                int buykaro=-prices[index]+solveMem(prices,index+1,0,dp);
                int skipkaro=0+solveMem(prices,index+1,1,dp);
                 profit=max(buykaro,skipkaro);
             }else
             {
                int sellkaro=+prices[index]+solveMem(prices,index,1,dp);
                int ignorekaro=0+solveMem(prices,index+1,0,dp);
                profit=max(sellkaro,ignorekaro);
             }
             return dp[index][buy]=profit;
    }  

 
public:
    int maxProfit(vector<int>& prices) {
         int n=prices.size();
         vector<vector<int>> dp(n+1,vector<int>(2,-1));
         return solveMem(prices,0,1,dp);
    }
};