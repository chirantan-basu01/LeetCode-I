class Solution {
public:
    int dp[100005][2];
    
    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return bestTime(prices,0,true);
    }
    
    int bestTime(vector<int>& prices,int currentDay,bool canBuy){
        if(currentDay>=prices.size())
            return 0;
        
       if(dp[currentDay][canBuy]!=-1)
           return dp[currentDay][canBuy];
        
        int idle=bestTime(prices,currentDay+1,canBuy);
        int buy=0;
        int sell=0;
        
        if(canBuy){
            buy=-prices[currentDay]+bestTime(prices,currentDay+1,false);
            dp[currentDay][canBuy]=max(idle,buy);
        }
        else{
            sell=prices[currentDay]+bestTime(prices,currentDay+1,true);
            dp[currentDay][canBuy]=max(idle,sell);
        }
        return dp[currentDay][canBuy];
    }
};