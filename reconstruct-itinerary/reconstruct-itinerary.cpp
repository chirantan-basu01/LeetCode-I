class Solution {
public:
    unordered_map<string,priority_queue<string,vector<string>,greater<string>>>graph;
    vector<string>result;
    
    void DFS(string vertex){
        while(!graph[vertex].empty()){
            auto to_vertex=graph[vertex].top();
            graph[vertex].pop();
            DFS(to_vertex);
        }
        result.push_back(vertex);
        return;
    }
    
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        for(auto e:tickets)
            graph[e[0]].push(e[1]);
        DFS("JFK");
        reverse(result.begin(),result.end());
        return result;
    }
};