class Solution {
public:
    bool DFS(int i,int j,int m,int n,vector<vector<int>>& grid){
        if(i<0 || j<0 || i>=m || j>=n)
            return 0;
        if(grid[i][j]==1)
            return true;
        
        grid[i][j]=1;
        
        bool d1=DFS(i+1,j,m,n,grid);
        bool d2=DFS(i-1,j,m,n,grid);
        bool d3=DFS(i,j+1,m,n,grid);
        bool d4=DFS(i,j-1,m,n,grid);
        
        return d1&d2&d3&d4;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        if(m==0)
            return 0;
        int res=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    res+=DFS(i,j,m,n,grid)?1:0;
                }
            }
        }
        return res;
    }
};