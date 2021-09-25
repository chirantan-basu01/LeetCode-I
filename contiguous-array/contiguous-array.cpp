class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>ump;
        int longestSubArray=0;
        int sum=0,ans=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]==0)
                sum--;
            else
                sum++;
            if(sum==0){
                if(i+1>longestSubArray)
                    longestSubArray=i+1;
            }
            else if(ump.find(sum)!=ump.end()){
                int temp=i-ump[sum];
                if(temp>longestSubArray){
                    longestSubArray=temp;
                }
            }
            else{
                ump[sum]=i;
            }
        }
        return longestSubArray;
    }
};