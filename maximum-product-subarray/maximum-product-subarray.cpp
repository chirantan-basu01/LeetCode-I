class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            int curr=1;
            for(int j=i;j<n;j++){
                curr=curr*nums[j];
                ans=max(ans,curr);
            }
        }
        return ans;
    }
};