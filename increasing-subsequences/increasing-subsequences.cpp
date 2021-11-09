class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>>res;
        vector<int>one;
        helper(0,res,one,nums);
        return vector<vector<int>>(res.begin(),res.end());
    }
    
    void helper(int idx,set<vector<int>>&res,vector<int>&one,vector<int>&nums){
        if(idx==nums.size()){
            if(one.size()>1){
                res.insert(one);
            }
            return;
        }
        
        if(one.empty() || nums[idx]>=one.back()){
            one.push_back(nums[idx]);
            helper(idx+1,res,one,nums);
            one.pop_back();
        }
        helper(idx+1,res,one,nums);
    }
};