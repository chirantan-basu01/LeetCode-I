class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long ans=0;
        for(int i=0;i<nums.size();i++)
        {
             int maxi=nums[i],mini=nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                mini=min(mini,nums[j]);
                maxi=max(maxi,nums[j]);
                long diff= maxi-mini;
                ans+=diff;
            }
        }
        return ans;
    }
};