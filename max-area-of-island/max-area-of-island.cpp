class Solution {
public:
    int DFS(int i,int j,int m,int n,vector<vector<int>>&vis,vector<vector<int>>& grid){
        if(i<0 || j<0 || i>=m || j>=n)
            return 0;
        if(grid[i][j]==0 || vis[i][j]==1)
            return 0;
        
        vis[i][j]=1;
        
        return 1+DFS(i+1,j,m,n,vis,grid)+DFS(i-1,j,m,n,vis,grid)+
            DFS(i,j+1,m,n,vis,grid)+DFS(i,j-1,m,n,vis,grid);
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int islands=0;
        vector<vector<int>>vis(m, vector<int>(n, false));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 and !vis[i][j]){
                    islands=max(islands,DFS(i,j,m,n,vis,grid));
                }
            }
        }
        return islands;
    }
};