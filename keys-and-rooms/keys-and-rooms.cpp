class Solution {
public:
    void DFS(int node,vector<bool>&vis,vector<vector<int>>& rooms){
        vis[node]=1;
        for(auto &it:rooms[node]){
            if(!vis[it]){
                DFS(it,vis,rooms);
            }
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>vis(n,false);
        
        DFS(0,vis,rooms);
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                return false;
            }
        }
        return true;
    }
};