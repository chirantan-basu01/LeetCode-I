class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>lis(n,1),count(n,1);
        
        for(int j=1;j<n;j++){
            for(int i=0;i<j;i++){
                if(nums[i]<nums[j]){
                    if(lis[j]<=lis[i]){
                        lis[j]=1+lis[i];
                        count[j]=count[i];
                    }
                    else if(lis[j]==lis[i]+1)
                        count[j]+=count[i];
                }
            }
        }
        int longest=*max_element(lis.begin(),lis.end());
        int result=0;
        for(int i=0;i<n;i++){
            if(longest==lis[i])
                result+=count[i];
        }
        return result;
    }
};