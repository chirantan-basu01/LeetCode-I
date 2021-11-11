class Solution {
public:
    
    int helper(vector<int>& nums,int x,int y){
        int sum=0;
        int n=nums.size();
        vector<int>dp1(n+1,0),dp2(n+1,0);
        
        for(int i=0;i<n;i++){
            if(i<x){
                sum+=nums[i];
                dp1[i]=sum;
            }
            else{
                sum+=nums[i]-nums[i-x];
                dp1[i]=max(sum,dp1[i-1]);
            }
        }
        
        sum=0;
        
        for(int i=n-1;i>=0;i--){
            if(i+y>n-1){
                sum+=nums[i];
                dp2[i]=sum;
            }
            else{
                sum+=nums[i]-nums[i+y];
                dp2[i]=max(sum,dp2[i+1]);
            }
        }
        
        int ans=0;
        
        for(int i=x-1;i<n-y;i++){
            ans=max(dp1[i]+dp2[i+1],ans);
        }
        return ans;
    }    
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        return max(helper(nums,firstLen,secondLen),helper(nums,secondLen,firstLen));
    }
};