class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int pre=-1,curr=0;
        int ans=0;
        for(auto num:nums){
            if(num){
                curr++;
            }
            else{
                pre=curr;
                curr=0;
            }
            ans=max(ans,pre+curr);
        }
        return ans;
    }
};