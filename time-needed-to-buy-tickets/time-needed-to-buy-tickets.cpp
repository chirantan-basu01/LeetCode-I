class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ticket = tickets[k];
        int res = 0;
        for(int i = 0; i<tickets.size(); i++){
          if(tickets[i] < ticket) res+=tickets[i];
          else if(tickets[i] >= ticket and i <= k) res+=ticket;
          else if(tickets[i] >= ticket and i > k) res+=ticket-1;
        }
        return res;
    }
};