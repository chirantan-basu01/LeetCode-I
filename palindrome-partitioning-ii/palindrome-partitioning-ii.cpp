class Solution {
public:
    bool isPalindrome(string &s,int start,int end){
        while(start<end){
            if(s[start]!=s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    
    int minimumCuts(string &s,int start,int end,vector<vector<int>>&dp){
        //base condition
        if(start>=end)
            return 0;
        if(isPalindrome(s,start,end)){
            return 0;
        }
        
        //dp condition
        if(dp[start][end]!=-1)
            return dp[start][end];
        
        int ans=INT_MAX-1;
        for(int current=start;current<end;current++){
            if(isPalindrome(s,start,current)){
                int leftHalf=minimumCuts(s,start,current,dp);
                int rightHalf=minimumCuts(s,current+1,end,dp);
                int tempAns=1+leftHalf+rightHalf;
                ans=min(ans,tempAns);
            }
        }
        
        dp[start][end]=ans;
        return dp[start][end];
    }
    
    int minCut(string s) {
        int n=s.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return minimumCuts(s,0,s.size()-1,dp);
    }
};