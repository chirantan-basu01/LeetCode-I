class Solution {
public:
    int maxLength(vector<vector<char>>&matrix,int currentRow,int currentCol,int n,int m,vector<vector<int>>&dp){
        if(currentRow>=n or currentCol>=m or currentCol<0 or currentRow<0 or matrix[currentRow][currentCol]=='0')
            return 0;
        
        if(dp[currentRow][currentCol]!=-1)
            return dp[currentRow][currentCol];
        
        int r=1+maxLength(matrix,currentRow,currentCol+1,n,m,dp);
        int d=1+maxLength(matrix,currentRow+1,currentCol,n,m,dp);
        int diagonal=1+maxLength(matrix,currentRow+1,currentCol+1,n,m,dp);
        
        dp[currentRow][currentCol]=min(r,min(d,diagonal));
        return dp[currentRow][currentCol];
    }
    
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        
        int side=0;
        for(int currentRow=0;currentRow<n;currentRow++){
            for(int currentCol=0;currentCol<m;currentCol++){
                if(matrix[currentRow][currentCol]=='1'){
                   side=max(side,maxLength(matrix,currentRow,currentCol,n,m,dp));
                }
            }
        }
        return side*side;
    }
};