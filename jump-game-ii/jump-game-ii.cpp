class Solution {
public:
    int solve(int idx,vector<int>& nums,vector<int>&dp){
        
        if(idx>=nums.size()-1)
            return 0;
        if(dp[idx]!=10001)
            return dp[idx];
        // unsigned int temp=0;
        for(int i=1;i<=nums[idx];i++)
            dp[idx]=min(dp[idx],1+solve(idx+i,nums,dp));
        return dp[idx];
    }
    
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,10001);
        return solve(0,nums,dp);
    }
};