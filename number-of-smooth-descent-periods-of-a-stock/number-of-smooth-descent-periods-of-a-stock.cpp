class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long int ans=prices.size();
        long long int count=0;
        
        for(int i=1;i<prices.size();i++){
            if(prices[i-1]-prices[i]==1)
                count++;
            else
                count=0;
            ans+=count;
        }
        return ans;
    }
};