class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>>graph;
    vector<int>lowlink;
    vector<bool>vis;
    vector<int>id;
    int time=0;
    
    void DFS(int node,int parent){
        vis[node]=true;
        id[node]=lowlink[node]=time++;
        
        for(auto it:graph[node]){
            if(parent==it)
                continue;
            if(vis[it]==false){
                DFS(it,node);
                lowlink[node]=min(lowlink[node],lowlink[it]);
                if(id[node]<lowlink[it])
                    ans.push_back({node,it});
            }
            else{
                lowlink[node]=min(lowlink[node],id[it]);
            }
        }
    }
    
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>&connections) {
        graph.resize(n);
        vis.resize(n,false);
        lowlink.resize(n,0);
        id.resize(n,0);
        for(auto it: connections){
            graph[it[0]].push_back(it[1]);
            graph[it[1]].push_back(it[0]);
        }
        for(int i=0;i<n;i++){
            if(!vis[i]){
                DFS(i,i);
            }
        }
        return ans;
    }
};