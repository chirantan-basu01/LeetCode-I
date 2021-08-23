class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int start=0,end=0;
        int minlen=INT_MAX,sum=0;
        while(end<n){
            if(sum<target)
                sum+=nums[end];
                end++;
            while(sum>=target){
                if(end-start<minlen)
                    minlen=end-start;
                sum-=nums[start];
                start++;
            }
        }
        return minlen==INT_MAX?0:minlen;
    }
};