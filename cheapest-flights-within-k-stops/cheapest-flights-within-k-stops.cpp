class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
 
        vector<pair<int,int>> adj[n];
        queue<pair<int,int>> q;
        vector<bool> vis(n, 0);
        vector<int> dist(n, INT_MAX);
 
        for(auto flight: flights) {
            int from = flight[0];
            int to = flight[1];
            int cost = flight[2];
            adj[from].push_back({to, cost});
        }
 
        q.push({0, src});
        dist[src] = 0;
 
        k++;
        while(!q.empty()) {
            int sz = q.size();
            k--;
            if(k < 0)
                break;
 
            for(int i=0; i<sz; i++) {
                auto curr = q.front();
                q.pop();
 
                int wt = curr.first;
                int node = curr.second;
 
                for(auto next: adj[node]) {
                    if(next.second + wt < dist[next.first]) {
                        dist[next.first] = next.second + wt;
                        q.push({dist[next.first], next.first});
                    }
                }
            }
        }
 
        return dist[dst] != INT_MAX ? dist[dst] : -1;
    }
};