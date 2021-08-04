class Solution {
public:
    
    void helper(int idx,vector<vector<int>>&ans,vector<int>&ds,vector<int>& arr,int target){
        if(target==0){
            ans.push_back(ds);
            return;
        } 
        
        for(int i=idx;i<arr.size();i++){
            if(i>idx and arr[i]==arr[i-1])
                continue;
            if(arr[i]>target)
                break;
            ds.push_back(arr[i]);
            helper(i+1,ans,ds,arr,target-arr[i]);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        helper(0,ans,ds,candidates,target);
        return ans;
    }
};