class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int max;
        int n=nums.size();
        int count=0;
        
        for(int i=0;i<n;i++){
            if(count==0){
                count=1;
                max=nums[i];
                continue;
            }
            else if(max!=nums[i]){
                count--;
            }
            else{
                count++;
            }
        }
        return max;
    }
};