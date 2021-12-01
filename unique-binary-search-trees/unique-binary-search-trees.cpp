class Solution {
public:
    int nthCatalan(int n,vector<int>&dp){
        if(n<=1)
            return 1;
        int current=n;
        if(dp[current]!=-1)
            return dp[current];
        
        int ways=0;
        for(int i=0;i<n;i++){
            ways+=nthCatalan(i,dp)*nthCatalan(n-i-1,dp);
        }
        return dp[current]=ways;
    }
    
    int numTrees(int n) {
        vector<int>dp(n+1,-1);
        return nthCatalan(n,dp);
    }
};