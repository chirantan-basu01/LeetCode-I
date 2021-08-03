class Solution {
public:
    
    void subs(vector<vector<int>>&ans,vector<int>& nums,vector<int>&temp,int idx){
        for(int i=idx;i<nums.size();i++){
            if(i>idx and nums[i]==nums[i-1]){
                continue;
            }
            temp.push_back(nums[i]);
            ans.push_back(temp);
            subs(ans,nums,temp,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans{vector<int>{}};
        vector<int>temp;
        sort(nums.begin(),nums.end());
        subs(ans,nums,temp,0);
        return ans;
    }
};