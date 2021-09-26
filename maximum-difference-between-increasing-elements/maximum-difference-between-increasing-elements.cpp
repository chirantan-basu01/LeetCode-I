#define INF 1e11
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                int diff=0;
                if(nums[i]<nums[j]){
                    diff=nums[j]-nums[i];
                    res=max(res,diff);
                }
                else if(nums[i]>nums[j]){
                    continue;
                }
            }
        }
        if(res<=0){
            return -1;
        }
        else{
            return res;
        }
    }
};