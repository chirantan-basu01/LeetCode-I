class Solution {
public:
    vector<vector<int>>dp;
    
    int helper(int idx,int maxm,int len,vector<int>&arr,int k){
        if(idx==arr.size()){
            return len*maxm;
        }
        
        int part=0,noPart=0;
        maxm=max(maxm,arr[idx]);
        len++;
        
        if(dp[idx][len]!=-1){
            return dp[idx][len];
        }
        
        if(len<k){
            noPart=helper(idx+1,maxm,len,arr,k);
        }
        part=len*maxm+helper(idx+1,INT_MIN,0,arr,k);
        
        return dp[idx][len]=max(part,noPart);
        
    }
    
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        dp.resize(n+1,vector<int>(k+1,-1));
        
        return helper(0,INT_MIN,0,arr,k);
    }
};