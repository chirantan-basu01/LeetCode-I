class Solution {
public:
    
    int helper(int idx,vector<vector<int>>& pairs,vector<int>&dp){
        if(idx>=pairs.size())
            return 0;
        if(dp[idx]!=-1)
            return dp[idx];
        int res=0;
        for(int i=idx+1;i<pairs.size();i++){
            if(pairs[idx][1]<pairs[i][0]){
                res=max(res,helper(i,pairs,dp));
            }
        }
        dp[idx]=res+1;
        return dp[idx];
    }
    
    static bool comp(vector<int>&p1,vector<int>&p2){
        return p1[0]<p2[0];
    }
    
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),comp);
        int n=pairs.size();
        vector<int>dp(n,-1);
        int res=-1;
        for(int i=0;i<n;i++)
            res=max(res,helper(i,pairs,dp));
        return res;
    }
};