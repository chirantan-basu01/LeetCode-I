class Solution {
public:
    int MOD=1000000007;
    int totalWays(int d, int f, int target,vector<vector<int>>&dp){
        if(d<=0 and target!=0)
            return 0;
        if(d<=0 and target==0)
            return 1;
        if(dp[d][target]!=-1)
            return dp[d][target];
        
        int ans=0;
        for(int current=1;current<=f;current++){
            if(current<=target){
                int tempAns=totalWays(d-1,f,target-current,dp);
                ans=(ans%MOD+tempAns%MOD)%MOD;
            }
        }
        dp[d][target]=ans%MOD;
        return dp[d][target];
    }
    
    int numRollsToTarget(int d, int f, int target) {
        vector<vector<int>>dp(d+1,vector<int>(target+1,-1));
        return totalWays(d,f,target,dp)%MOD;
    }
};