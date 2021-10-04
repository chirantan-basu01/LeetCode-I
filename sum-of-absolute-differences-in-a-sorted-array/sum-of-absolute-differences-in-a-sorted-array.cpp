class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int sum = 0 , cur = 0 , n = nums.size();
        vector<int> ans(n);
        for(int i = 0;i<n;i++)sum+=nums[i];
        for(int i = 0;i<n;i++){
            ans[i] = ((i*nums[i]) - cur) + ((sum-cur-nums[i])-((n-i-1)*nums[i]));
            cur+=nums[i];
        }
        return ans;
    }
};