class Solution {
public:
    void DFS(int i,int j,int m,int n,vector<vector<char>>& grid){
        //out of bounds condition check
        if(i<0 || j<0 || i>=m || j>=n )
            return;
        if(grid[i][j]=='2' || grid[i][j]=='0')
            return;
        
        grid[i][j]='2';
        
        DFS(i+1,j,m,n,grid);
        DFS(i-1,j,m,n,grid);
        DFS(i,j+1,m,n,grid);
        DFS(i,j-1,m,n,grid);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size(); int n=grid[0].size();
        int islands=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    DFS(i,j,m,n,grid);
                    islands++;
                }
            }
        }
        return islands;
    }
};