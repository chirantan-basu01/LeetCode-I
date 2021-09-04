class Solution {
public:
    void DFS(int i,int j,int m,int n,int &mx,int &my,vector<vector<int>>&land,vector<vector<int>>&vis){
        if(i<0 || j<0 || i>=m || j>=n || land[i][j]==0)
            return;
        if(vis[i][j]==1)
            return;
        mx=max(mx,i);
        my=max(my,j);
        vis[i][j]=1;
        
        DFS(i+1,j,m,n,mx,my,land,vis);
        DFS(i-1,j,m,n,mx,my,land,vis);
        DFS(i,j+1,m,n,mx,my,land,vis);
        DFS(i,j-1,m,n,mx,my,land,vis);
    }
    
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int m=land.size();
        int n=land[0].size();
        vector<vector<int>>coordinates;
        vector<vector<int>>vis(m,vector<int>(n,0));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(land[i][j]==1 and vis[i][j]==0){
                    int mx=-1;
                    int my=-1;
                    DFS(i,j,m,n,mx,my,land,vis);
                    coordinates.push_back({i,j,mx,my});
                }
            }
        }
        return coordinates;
    }
};