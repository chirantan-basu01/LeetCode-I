class Solution {
public:
    int minKeyPress(int step,int value,int copy,int n,vector<vector<int>>&dp){
        //base condition
        if(step>n or value>n)
            return INT_MAX-1;
        if(n==1)
            return 0;
        
        if(value==n)
            return step;
        
        //dp condition
        if(dp[step][value]!=-1)
            return dp[step][value];
        
        int copy_paste=minKeyPress(step+1,value+copy,copy,n,dp);
        int paste_copy=minKeyPress(step+2,2*value,value,n,dp);
        
        dp[step][value]=min(copy_paste,paste_copy);
        return dp[step][value];
    }
    
    int minSteps(int n) {
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return minKeyPress(1,1,1,n,dp);
    }
};