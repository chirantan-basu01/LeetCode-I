class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count=0,i=0,j=0;
        int res=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
            while(j<nums.size() && count>k){
                if(nums[j]==0){
                    count--;
                }
                j++;
            }
            res=max(res,i-j+1);
        }
        return res==INT_MIN?((count<=k?nums.size():0)):res;
    }
};