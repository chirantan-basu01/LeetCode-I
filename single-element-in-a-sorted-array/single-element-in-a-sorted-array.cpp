class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0,end=nums.size()-1,mid;
        
        while(start<end){
            mid=(start+end)/2;
            if((mid%2==1 and nums[mid]==nums[mid-1]) || (mid%2==0 and nums[mid]==nums[mid+1]))
                start=mid+1;
            else
                end=mid;
        }
        return nums[start];
    }
};