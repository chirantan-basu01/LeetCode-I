class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>lis(nums.size(),1);
        int max=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]>nums[i] and lis[j]<=lis[i])
                    lis[j]=1+lis[i];
            }
        }
        return *max_element(lis.begin(),lis.end());
    }
};