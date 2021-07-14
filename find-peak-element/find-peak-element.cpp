class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        
        while(left<right-1){
            int mid=(right+left)/2;
            if(nums[mid]>nums[mid+1] and nums[mid]>nums[mid-1])
                return mid;
            else if(nums[mid]>nums[mid+1])
                right=mid-1;
            else
                left=mid+1;
        }
        return nums[left]>nums[right]?left:right;
    }
};