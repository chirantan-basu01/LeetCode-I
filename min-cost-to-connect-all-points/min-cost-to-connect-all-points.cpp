class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        set<pair<int,int>>vis,unvis;
        int ans=0;
        for(int i=0;i<n;i++){
            unvis.insert({points[i][0],points[i][1]});
        }
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        pq.push({0,{points[0][0],points[0][1]}});
        
        while(!pq.empty() and vis.size()<n){
            pair<int,pair<int,int>>pi=pq.top();
            pq.pop();
            if(vis.find(pi.second)!=vis.end())
                continue;
            vis.insert(pi.second);
            unvis.erase(pi.second);
            
            for(auto it:unvis){
                int dist=abs(pi.second.first-it.first)+abs(pi.second.second-it.second);
                pq.push({dist,{it.first,it.second}});
            }
            ans+=pi.first;
        }
        return ans;
    }
};