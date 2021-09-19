class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n);
        vector<int>right(n);
        
        left[0]=nums[0];
        right[n-1]=nums[n-1];
        
        for(int i=1; i<n; i++)
        {
            left[i]=max(left[i-1],nums[i]);
        }
        for(int i=n-2; i>=0; i--)
        {
            right[i]=min(nums[i],right[i+1]);
        }
        int count=0;
        for(int i=1; i<n-1; i++)
        {            
            if(left[i-1] < nums[i] && nums[i] < right[i+1])
            {
                count+=2;
            }
            else if(nums[i-1] < nums[i] && nums[i] < nums[i+1])
            {
                count++;
            }
        }
        return count;
    }
};