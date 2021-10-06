class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>pq;
        vector<string>res(score.size());
        
        for(int i=0;i<score.size();i++){
            pq.push({score[i],i});
        }
        int count=1;
        while(pq.size()){
            auto p=pq.top();
            pq.pop();
            
            if(count==1)
                res[p.second]="Gold Medal";
            else if(count==2)
                res[p.second]="Silver Medal";
            else if(count==3)
                res[p.second]="Bronze Medal";
            else 
                res[p.second]=to_string(count);
            count++;
        }
        return res;
    }
};