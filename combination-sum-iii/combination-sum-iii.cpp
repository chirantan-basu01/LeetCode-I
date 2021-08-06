class Solution {
public:
    
    void helper(int idx, vector<vector<int>>&ans,vector<int>&ds,int k,int n){
        if(n==0 and k==0){
            ans.push_back(ds);
            return;
        }
        for(int i=idx;i<=10-k and i<=n;i++){
            ds.push_back(i);
            helper(i+1,ans,ds,k-1,n-i);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>ds;
        helper(1,ans,ds,k,n);   
        return ans;
    }
};