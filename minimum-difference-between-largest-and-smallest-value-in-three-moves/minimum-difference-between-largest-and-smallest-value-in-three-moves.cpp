class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size()<5)
            return 0;
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        int case1=nums[n-1]-nums[3];
        int case2=nums[n-2]-nums[2];
        int case3=nums[n-3]-nums[1];
        int case4=nums[n-4]-nums[0];
        
        return min(case1,min(case2,min(case3,case4)));
    }
};