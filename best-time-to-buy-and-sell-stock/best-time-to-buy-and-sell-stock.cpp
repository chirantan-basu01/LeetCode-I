class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minValue=INT_MAX;
        for(int i=0;i<prices.size();i++){
            minValue=min(minValue,prices[i]);
            profit=max(profit,prices[i]-minValue);
        }
        return profit;
    }
};