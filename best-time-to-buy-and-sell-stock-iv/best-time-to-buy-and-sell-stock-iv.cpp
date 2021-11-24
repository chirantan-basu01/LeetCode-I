class Solution {
public:
    
    int dp[1005][2][109];
    
    int maxProfit(int k,vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return bestTime(prices,0,true,k);
    }
    
    int bestTime(vector<int>& prices,int currentDay,bool canBuy,int transCount){
        if(currentDay>=prices.size() or transCount<=0)
            return 0;
        
       if(dp[currentDay][canBuy][transCount]!=-1)
           return dp[currentDay][canBuy][transCount];
        
        int idle=bestTime(prices,currentDay+1,canBuy,transCount);
        int buy=0;
        int sell=0;
        
        if(canBuy){
            buy=-prices[currentDay]+bestTime(prices,currentDay+1,false,transCount);
            dp[currentDay][canBuy][transCount]=max(idle,buy);
        }
        else{
            sell=prices[currentDay]+bestTime(prices,currentDay+1,true,transCount-1);
            dp[currentDay][canBuy][transCount]=max(idle,sell);
        }
        return dp[currentDay][canBuy][transCount];
    }
};