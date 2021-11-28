class Solution {
public:
    int pathSum(int currentRow,int currentCol,int n,int m,vector<vector<int>>&dp,vector<vector<int>>&matrix){
        //base
        if(currentRow<0 or currentRow>=n or currentCol<0 or currentCol>=m)
            return 10000;
        if(currentRow==n-1)
            return matrix[currentRow][currentCol];
        
        //dp
        if(dp[currentRow][currentCol]!=-1)
            return dp[currentRow][currentCol];
        
        int d=matrix[currentRow][currentCol]+pathSum(currentRow+1,currentCol,n,m,dp,matrix);
        int dr=matrix[currentRow][currentCol]+pathSum(currentRow+1,currentCol+1,n,m,dp,matrix);
        int dl=matrix[currentRow][currentCol]+pathSum(currentRow+1,currentCol-1,n,m,dp,matrix);
            
        dp[currentRow][currentCol]=min(d,min(dr,dl));
        return dp[currentRow][currentCol];
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            ans=min(ans,pathSum(0,i,n,m,dp,matrix));
        }
        return ans;
    }
};