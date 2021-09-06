class Solution {
public:
    void DFS(int node,vector<bool>&visited,vector<vector<int>>& adj){
        visited[node]=1;
        for(auto it:adj[node]){
            if(!visited[it])
            DFS(it,visited,adj);
        }
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1)
            return -1;
        
        vector<vector<int>>adj(n);
        for(auto it:connections){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<bool>visited(n,false);
        int components=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                DFS(i,visited,adj);
                components++;
            }
        }
        return components-1;
    }
};