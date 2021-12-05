class Solution {
public:
    int maxScore(int start,int end,vector<int>&stoneValue,vector<vector<int>>&dp){
        //base condition
        if(start>end)
            return 0;
        
        //dp copndition
        if(dp[start][end]!=-1)
            return dp[start][end];
        
        int r=0,l=0;
        for(int i=start;i<=end;i++){
            r+=stoneValue[i];
        }
        int ans=0;
        for(int i=start;i<=end;i++){
            l+=stoneValue[i];
            r-=stoneValue[i];
            
            if(l<r){
                ans=max(ans,l+maxScore(start,i,stoneValue,dp));
            }
            if(r<l){
                ans=max(ans,r+maxScore(i+1,end,stoneValue,dp));
            }
            if(l==r){
                ans=max(ans,l+max(maxScore(start,i,stoneValue,dp),maxScore(i+1,end,stoneValue,dp)));
            }
        }
        dp[start][end]=ans;
        return dp[start][end];
    }
    
    int stoneGameV(vector<int>& stoneValue) {
        int n=stoneValue.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return maxScore(0,n-1,stoneValue,dp);
    }
};