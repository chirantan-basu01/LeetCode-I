class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int value=0; 
        for(int i=0;i<nums.size();i++){
            value+=nums[i];
            if(2*value==sum+nums[i]){
                return i;
            }
        }
        return -1;
    }
};