class Solution {
public:
    int Dijkstra(int source,int n,vector<vector<pair<int,int>>>&adj,vector<int>&timetaken){
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,source});
        timetaken[source]=0;
        
        while(!pq.empty()){
            int time=pq.top().first;
            int source=pq.top().second;
            pq.pop();
            
            for(auto it:adj[source]){
                if(timetaken[it.first]>(it.second+time)){
                    timetaken[it.first]=it.second+time;
                    pq.push({it.second+time,it.first});
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(timetaken[i]==INT_MAX)
                return -1;
            ans=max(ans,timetaken[i]);
        }
        return ans;
    }
    
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int>timetaken(n,INT_MAX);
        vector<vector<pair<int,int>>>adj(n);
        
        for(auto it:times){
            adj[it[0]-1].push_back({it[1]-1,it[2]});
        }
        return Dijkstra(k-1,n,adj,timetaken);
    }
};