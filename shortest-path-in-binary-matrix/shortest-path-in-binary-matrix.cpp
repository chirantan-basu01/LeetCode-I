class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        
        if(grid[0][0]!=0 || grid[m-1][n-1]!=0){
            return -1;
        }
        queue<pair<int,int>>q;
        q.push(make_pair(0,0));
        vector<vector<int>>directions={{1,0},{0,1},{-1,0},{0,-1},
                                       {1,1},{-1,-1},{1,-1},{-1,1}};
        grid[0][0]=1;
        
        while(!q.empty()){
            auto curr=q.front();    
            int x=curr.first;
            int y=curr.second;
            
            if(x==m-1 and y==n-1){
                return grid[x][y];
            }
            
            for(auto dir:directions){
                int nx=x+dir[0];
                int ny=y+dir[1];
                
                if(nx>=0 and ny>=0 and nx<m and ny<n and grid[nx][ny]==0){
                    q.push(make_pair(nx,ny));
                    grid[nx][ny]=grid[x][y]+1;
                }
            }
             q.pop();
        }
        return -1;
    }
};