class Solution {
public:
    int nthfib(int n,vector<int>&dp){
        if(n<=1)
            return n;
        
        int currentKey=n;
        if(dp[currentKey]!=-1)
            return dp[currentKey];
        
        int a=nthfib(n-1,dp);
        int b=nthfib(n-2,dp);
        
        dp[currentKey]=a+b;
        return dp[currentKey];
    }
    
    int fib(int n) {
        vector<int>dp(n+1,-1);
        return nthfib(n,dp);
    }
};