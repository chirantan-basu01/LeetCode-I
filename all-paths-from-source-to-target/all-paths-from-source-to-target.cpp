class Solution {
public:
    void DFS(int node,int lastNode,vector<int>&path,vector<vector<int>>& graph,
             vector<vector<int>>&result){
        path.push_back(node);
        
        if(node==lastNode){
            result.push_back(path);
        }
        
        for(auto it:graph[node]){
            DFS(it,lastNode,path,graph,result);
        }
        path.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>result;
        vector<int>path;
        
        int n=graph.size();
        DFS(0,--n,path,graph,result);
        
        return result;
    }
};