class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int res=0;
        int n=nums.size();
        vector<bool>seen(n);
        
        for(auto it:nums){
            int count=0;
            while(!seen[it]){
                seen[it]=1;
                count++;
                it=nums[it];
            }
            res=max(res,count);
        }
        return res;
    }
};