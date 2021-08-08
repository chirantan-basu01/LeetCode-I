class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>q;
        int x=0,sum=0;
        for(int i=0;i<piles.size();i++){
            q.push(piles[i]);
        }
        while(k--){
            x=q.top();
            q.pop();
            x-=floor(x/2);
            q.push(x);
        }
        while(!q.empty()){
            sum+=q.top();
            q.pop();
        }
        return sum;
    }
};