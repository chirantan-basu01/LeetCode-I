class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size()<=1)
            return nums.size();
        int n=nums.size();
        vector<int>dp(n,1);
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    if(dp[j]+1 > dp[i]){
                        dp[i]=dp[j]+1;
                    }
                }
            }
        }
        int longest=0;
        for(int i=0;i<dp.size();i++){
            longest=max(longest,dp[i]);
        }
        return longest;
    }
};