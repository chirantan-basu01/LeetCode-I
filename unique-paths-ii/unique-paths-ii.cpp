class Solution {
public:
    int memo[101][101];
    int path(vector<vector<int>>& obstacleGrid,int i,int j,int m, int n)
    {
        if(i>=m || j>=n || obstacleGrid[i][j]==1)
            return 0;
        
        if(i==m-1 && j==n-1)
            return 1;
        
        if(memo[i][j]!=-1)
            return memo[i][j];
        
        int down=0;
        if(i<m)
            down=path(obstacleGrid,i+1,j,m,n);
        int right=0;
        if(j<n)
            right=path(obstacleGrid,i,j+1,m,n);
        
        return memo[i][j]=down+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        memset(memo,-1,sizeof(memo));
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        return path(obstacleGrid,0,0,m,n);
    }
};

  