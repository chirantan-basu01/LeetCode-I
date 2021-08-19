class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq(begin(stones),end(stones));

            while(pq.size()>1){
                int top=pq.top(); pq.pop();
                int top2=pq.top(); pq.pop();
                
                if(top>top2){
                    int temp=abs(top-top2);
                    pq.push(temp);
                }
                else if(top==top2){
                    pq.push(0);
                }
            }  
        return pq.top();
    }
};