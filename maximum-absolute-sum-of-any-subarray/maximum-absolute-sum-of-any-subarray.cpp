class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int sum=0,maxi=0,mini=0;
        for(auto num:nums){
            sum+=num;
            maxi=max(maxi,sum);
            mini=min(mini,sum);
        }
        return maxi-mini;
    }
};