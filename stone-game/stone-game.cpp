class Solution {
public:
    int helper(int start,int end,bool turn,vector<int>& piles,vector<vector<int>>&dp){
        //base condition
        if(start>end)
            return 0;
        
        //dp condition
        if(dp[start][end]!=-1)
            return dp[start][end];
        
        //alex turn
        if(turn){
            int rr1=piles[start]+helper(start+1,end,false,piles,dp);
            int rr2=piles[end]+helper(start,end-1,false,piles,dp);
            dp[start][end]=max(rr1,rr2);
            return dp[start][end];
        }
        //lee turn
            int rr1=piles[start]+helper(start+1,end,true,piles,dp);
            int rr2=piles[end]+helper(start,end-1,true,piles,dp);
            dp[start][end]=min(rr1,rr2);
            return dp[start][end];
    }
    
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        int start=0;
        int end=n-1;
        vector<vector<int>>dp(n,vector<int>(n,-1));
        
        return helper(0,n-1,1,piles,dp);
    }
};