class Solution {
public:
    void DFS(int node,vector<bool>&visited,vector<vector<int>>& isConnected){
        visited[node]=1;
        
        for(int i=0;i<visited.size();i++){
            if(i!=node and !visited[i] and isConnected[node][i]){
                DFS(i,visited,isConnected);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        if(n==0)
            return 0;
        vector<bool>visited(n,false);
        int group=0;
        for(int i=0;i<n;i++){
            group+= !visited[i]?DFS(i,visited,isConnected),1:0;
        }
        return group;
    }
};