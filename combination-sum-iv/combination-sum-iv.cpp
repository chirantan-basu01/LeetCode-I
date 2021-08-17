class Solution {
public:
    
    int combinationSum(vector<int>& candidate,int target,vector<int>&dp){
        if(target<0) return 0;
        if(target==0) return 1;
        
        if(dp[target]!=-1)
            return dp[target];
        
        int ans=0;
        for(int i=0;i<candidate.size();i++){
            if(target>=candidate[i]){
                ans+=combinationSum(candidate,target-candidate[i],dp);
            }
        }
        return dp[target]=ans;
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target+1,-1);
        return combinationSum(nums,target,dp);
    }
};