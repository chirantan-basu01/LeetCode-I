class Solution {
public:
    int dp[60];
    int rec(int n)
    {
        if(n<=2)
            return 1;
        
        if(dp[n]!=-1)
            return dp[n];
        
        int ans = INT_MIN;
        int firstNum;
        int secondNum;
        
        for(int i=1; i<n; i++){
            firstNum = i*(n-i);
            secondNum = i*rec(n-i);
            ans = max(ans, max(firstNum, secondNum));
        }
        return dp[n] = ans;
    }
    
    int integerBreak(int n) {
        memset(dp,-1,sizeof(dp));
        return rec(n);
    }
};