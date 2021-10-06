class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res=0;int ones=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                ones++;
                res=max(res,ones);
            }
            else{
                ones=0;
            }
        }
        
        return res;
    }
};