class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>>pq;
        int answer=INT_MIN;
        
        for(auto &point:points){
            while(pq.size() and point[0]-pq.top().second>k)
                pq.pop();
            if(!pq.empty())
                answer=max(answer,point[1]+point[0]+pq.top().first);
            pq.push(make_pair(point[1]-point[0],point[0]));
        }
        return answer;
    }
};