class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>colors(n,0);
        queue<int>q;
        
        for(int i=0;i<n;i++){
            if(colors[i])
                continue;
            
            colors[i]=1;
            q.push(i);
            
            while(!q.empty()){
                int temp=q.front();
                
                for(auto neighbour:graph[temp]){
                    
                    if(!colors[neighbour]){
                        colors[neighbour]=colors[neighbour]-colors[temp];
                        q.push(neighbour);
                    }
                    else if(colors[neighbour]==colors[temp])              
                        return false;
                }
                q.pop();
            }
        }
        return true;
    }
};