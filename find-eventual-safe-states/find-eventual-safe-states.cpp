class Solution {
public:
 /*   
    Unvisited nodes are marked as 0.
    Visited but unsafe nodes are marked as 1.
    Visited but safe nodes are marked as 2.
*/
    bool DFS(int node,vector<int>&color,vector<vector<int>>& graph){
        color[node]=1;
        
        for(auto it:graph[node]){
            if((color[it]==0 and DFS(it,color,graph)) || color[it]==1)
                return true;
        }
        
        color[node]=2;
        return false;
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        int m=graph[0].size();
        
        vector<int>color(n,0);
        vector<int>result;
        
        for(int i=0;i<n;i++){
            if(color[i]==2 || !DFS(i,color,graph)){
                result.push_back(i);
            }
        }
        return result;
    }
};