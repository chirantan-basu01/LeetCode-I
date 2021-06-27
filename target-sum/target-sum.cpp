class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int range=0,cz=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                cz++;
            else
                range+=nums[i];
        }
        
        if(target>range)
            return 0;
        
        int sum=range+target;
        
        if(sum%2==1)
            return 0;
        
        sum=sum/2;
        int n=nums.size();
        int dp[n+1][sum+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0)
                    dp[i][j]=0;
                if(j==0)
                    dp[i][j]=1;
            }
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if((nums[i-1]<=j) && (nums[i-1]!=0))
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-nums[i-1]];
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        return pow(2,cz)*dp[n][sum];
    }
};