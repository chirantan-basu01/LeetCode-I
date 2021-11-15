class Solution {
public:
     int nthfib(int n,vector<int>&dp){
        if(n<=1)
            return n;
        if(n==2)
            return 1;
        int currentKey=n;
        if(dp[currentKey]!=-1)
            return dp[currentKey];
        
        int a=nthfib(n-1,dp);
        int b=nthfib(n-2,dp);
        int c=nthfib(n-3,dp);
        
        dp[currentKey]=a+b+c;
        return dp[currentKey];
    }
    int tribonacci(int n) {
        vector<int>dp(n+1,-1);
        return nthfib(n,dp);
    }
};