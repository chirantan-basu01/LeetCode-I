class Solution {
public:
    int x[4]={-1,0,1,0};
    int y[4]={0,1,0,-1};

    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        
        if(m==0)
            return {};
        
        queue<pair<int,int>>q;
        vector<vector<int>>dis(m,vector<int>(n,-1));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                    dis[i][j]=0;
                }
            }
        }
        while(!q.empty()){
            pair<int,int>node=q.front();
            q.pop();
            
            for(int dir=0;dir<4;dir++){
                int xd=node.first+x[dir];
                int yd=node.second+y[dir];
                if(xd>=0 and yd>=0 and xd<m and yd<n and dis[xd][yd]==-1){
                    dis[xd][yd]=1+dis[node.first][node.second];
                    q.push({xd,yd});
                }
            }
        }
        return dis;
    }
};