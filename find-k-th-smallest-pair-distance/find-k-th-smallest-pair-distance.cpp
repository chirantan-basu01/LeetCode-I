class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        
        int minDist=0;
        int maxDist=nums[nums.size()-1]-nums[0];
        
        while(minDist<=maxDist){
            int midDist=(minDist+maxDist)/2;
            
            int left=0;
            int right=0;
            int count=0;
            
            while(right<nums.size()){
                if(nums[right]-nums[left]>midDist){
                    left++;
                }
                else{
                    count+=right-left;
                    right++;
                }
            }
            if(count>=k){
                maxDist=midDist-1;
            }
            else{
                minDist=midDist+1;
            }
        }
        return minDist;
    }
};