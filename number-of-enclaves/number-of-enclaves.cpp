class Solution {
public:
    int DFS(int i,int j,int m,int n,vector<vector<int>>& grid){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0)
            return 0;
        grid[i][j]=0;
        return 1+DFS(i+1,j,m,n,grid)+DFS(i-1,j,m,n,grid)+
            DFS(i,j+1,m,n,grid)+DFS(i,j-1,m,n,grid);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        if(m==0)
            return 0;
        int total_ones=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                total_ones+=grid[i][j];
            }
        }
        int reachable_ones=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==0 || i==m-1 || j==n-1 and grid[i][j]==1){
                    reachable_ones+=DFS(i,j,m,n,grid);
                }
            }
        }
        return total_ones-reachable_ones;
    }
};