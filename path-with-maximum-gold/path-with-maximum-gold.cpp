class Solution {
public:
    
    int dfs(int i,int j,vector<vector<int>>& grid){
        int pathSum=0;
        int temporary=0;
        
        //checking for out of bounds
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0){
            return 0;
        }
        
        temporary=grid[i][j];  //storing value in temp to mark the visited paths
        grid[i][j]=0;         //visited paths as 0
        
        pathSum=max(pathSum,dfs(i+1,j,grid));
        pathSum=max(pathSum,dfs(i-1,j,grid));
        pathSum=max(pathSum,dfs(i,j+1,grid));
        pathSum=max(pathSum,dfs(i,j-1,grid));
        
        grid[i][j]=temporary;
        return temporary+pathSum;
    }
    
    
    int getMaximumGold(vector<vector<int>>& grid) {
        int check=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                
                //checking first cell if gold present or not
                if(grid[i][j]!=0){
                    check=max(check,dfs(i,j,grid));
                }
            }
        }
        return check;
    }
};