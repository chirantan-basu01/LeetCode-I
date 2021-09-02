class Solution {
public:
    int DFS(int node,vector<vector<int>>&adj,vector<int>&informTime){
        int time=0;
        for(auto it:adj[node])
            time=max(time,DFS(it,adj,informTime));
        return time+informTime[node];
    }
    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>>adj(n);
        for(auto i = 0; i < adj.size(); ++i){
            if (manager[i] != -1)
                adj[manager[i]].push_back(i);
        }
        return DFS(headID,adj,informTime);
    }
};