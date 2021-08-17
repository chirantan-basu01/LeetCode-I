class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int r=nums[0];
        int maxi=r;
        int mini=r;
        
        for(int i=1;i<n;i++){
            if(nums[i]<0){
                swap(maxi,mini);
            }
            maxi=max(nums[i],nums[i]*maxi);
            mini=min(nums[i],nums[i]*mini);
            r=max(r,maxi);
        }
        return r;
    }
};