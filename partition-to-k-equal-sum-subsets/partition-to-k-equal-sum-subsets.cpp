class Solution {
public:
    
    bool DFS(vector<int>& nums,vector<int>&visited,int k,int idx,int targetSum,int curSum){
        
        if(k==1)
            return true;
        
        if(curSum==targetSum)
            return DFS(nums,visited,k-1,0,targetSum,0);
        
        for(int i=idx;i<nums.size();i++){
            if(!visited[i]){
                visited[i]=true;
                if(DFS(nums,visited,k,i+1,targetSum,curSum+nums[i]))
                    return true;
                visited[i]=false;
            }
        }
        return false;
    }
    
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        vector<int>visited(nums.size(),false);
        int sum=0;
        for(auto it:nums){
            sum+=it;
        }
        if(sum%k!=0)
            return false;
        int targetSum=sum/k;
        return DFS(nums,visited,k,0,targetSum,0);
    }
};