class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int j=i+1;
            while(j<n){
                sum=nums[i]+nums[j];
                if(sum==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
                else{
                    j++;
                }
                }
            if(!ans.empty())
                break;
            
        }
        return ans;
    }
};