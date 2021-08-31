class Solution {
public:
    bool isCyclic(int node,vector<int>adj[],vector<int>&vis){
        if(vis[node]==1)
            return true;
        if(vis[node]==0){
            vis[node]=1;
            for(auto it:adj[node]){
                if(isCyclic(it,adj,vis)){
                    return true;
                }
            }
        }
        vis[node]=2;
        return false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<int>adj[n];
        
        for(auto it:prerequisites){
            adj[it[1]].push_back(it[0]);
        }
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(isCyclic(i,adj,vis)){
                return false;
            }
        }
        return true;
    }
};