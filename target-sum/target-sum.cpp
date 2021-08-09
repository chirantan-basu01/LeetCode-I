class Solution {
public:
    int count=0;
    int findTargetSumWays(vector<int>& nums, int target) {
        calculate(nums,target,0,0);
        return count;
    }
    
    void calculate(vector<int>& nums,int target,int idx,int sum){
        if(idx==nums.size()){
            if(sum==target){
                count++;
            }
        }
        else{
            calculate(nums,target,idx+1,sum+nums[idx]);
            calculate(nums,target,idx+1,sum-nums[idx]);
        }
    }
};