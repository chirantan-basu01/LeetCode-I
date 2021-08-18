class Solution {
public:
    int numDecodings(string s) {
        vector<int>dp(s.size()+1,-1);
        int ans=0;
        ans=helper(s,0,dp);
        return ans;
    }
    int helper(string &s,int idx,vector<int>&dp){
        int n=s.size();
        if(s[idx]=='0')
            return 0;
        if(idx==n || idx==n-1)
            return 1;
        if(dp[idx]!=-1)
            return dp[idx];
        
        string b=s.substr(idx,2);
        int way1=helper(s,idx+1,dp);
        int way2=0;
        
        if(stoi(b)>9 and stoi(b)<27){
            way2=helper(s,idx+2,dp);
        }
        return dp[idx]=way1+way2;
    }
    
};