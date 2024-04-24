class Solution {
public:
     void computeTribonacci(int n, map<int, int>& memo) {
        if (n == 0) {
            memo[n] = 0;
        } else if (n == 1 || n == 2) {
            memo[n] = 1;
        } else {
            memo[n] = memo[n-3] + memo[n-2] + memo[n-1];
        }
    }
    
    int tribonacci(int n) {
        map<int, int> memo;
        for (int i = 0; i <= n; i++) {
            computeTribonacci(i, memo);
        }
        return memo[n];
    }
};