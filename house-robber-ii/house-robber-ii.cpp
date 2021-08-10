class Solution {
public:
    int dp[101][true];
    int helper(vector<int>& nums,int n,int idx,bool first,vector<vector<int>> &dp){
        if(idx>=n)
            return 0;
        if(idx==(n-1)){
            if(first==true)
                return 0;
            else
                return nums[idx];
        }
        if(dp[idx][first]!=-1)
            return dp[idx][first];
            
        int a=nums[idx]+helper(nums,n,idx+2,first,dp);
        int b=helper(nums,n,idx+1,first,dp);
        return dp[idx][first]=max(a,b);
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n, vector<int> (2, -1));
        if(n==1){
            return nums[0];
        }
        return max((nums[0]+helper(nums,n,2,true,dp)),helper(nums,n,1,false,dp));
    }
};