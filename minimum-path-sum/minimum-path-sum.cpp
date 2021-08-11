class Solution {
public:
    
    int helper(vector<vector<int>>& grid,int row,int col,vector<vector<int>>&dp){
        if(row==0 and col==0)
            return grid[row][col];
        if(row==0)
            return grid[row][col]+helper(grid,row,col-1,dp);
        if(col==0)
            return grid[row][col]+helper(grid,row-1,col,dp);
        
        if(dp[row][col]!=-1)
            return dp[row][col];
        
        return dp[row][col] =grid[row][col]+min(helper(grid,row-1,col,dp),helper(grid,row,col-1,dp));
    }
    int minPathSum(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        vector<vector<int>>dp(row,vector<int>(col,-1));
        return helper(grid,row-1,col-1,dp);
    }
};