#define WHITE 0
#define RED 1
#define BLUE 2

class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n+1);
        vector<int>color(n+1,WHITE);
        vector<bool>explored(n+1,false);
        queue<int>q;
        
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        for(int i=0;i<n;i++){
            while(!explored[i]){
                color[i]=RED;
                q.push(i);
                while(!q.empty()){
                    int u=q.front();
                    q.pop();
                    if(explored[u]){
                        continue;
                    }
                    explored[u]=true;
                    for(auto v:adj[u]){
                        if(color[v]==color[u]){
                            return false;
                        }
                        if(color[u]==RED){
                            color[v]=BLUE;
                        }
                        else{
                            color[v]=RED;
                        }
                        q.push(v);
                    }
                }
            }
        }
        return true;
    }
};