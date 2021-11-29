class Solution {
public:
    int minCost(int currentRow,int currentCol,int n,int m,vector<vector<int>>&grid,vector<vector<int>>&dp){
        //base condition
        if(currentRow>=n or currentCol>=m or currentRow<0 or currentCol<0 )
            return 10000;
        
        if(currentRow==n-1)
            return grid[currentRow][currentCol];
        
        //dp condition
        if(dp[currentRow][currentCol]!=-1)
            return dp[currentRow][currentCol];
        
        //memo
        int tempAns=INT_MAX;
        for(int i=0;i<m;i++){
            if(i!=currentCol){
                tempAns=min(tempAns,grid[currentRow][currentCol]+minCost(currentRow+1,i,n,m,grid,dp));
            }
        }
        
        dp[currentRow][currentCol]=tempAns;
        return dp[currentRow][currentCol];
    }
    
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        
        int ans=INT_MAX;
        for(int i=0;i<m;i++){
            ans=min(ans,minCost(0,i,n,m,grid,dp));
        }
        return ans;
    }
};