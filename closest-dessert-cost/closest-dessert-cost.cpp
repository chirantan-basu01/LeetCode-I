class Solution {
public:
    int target;
    
    int closest(int a,int b){
        if(a==0)
            return b;
        if(b==0)
            return a;
        if(abs(target-a)==abs(target-b))
            return a<b?a:b;
        return abs(target-a)<abs(target-b)?a:b;
    }
    
    int dfs(vector<int>&top,int idx,int sum){
        if(idx>=top.size())
            return sum;
        
        int a=dfs(top,idx+1,sum+top[idx]);
        int b=dfs(top,idx+1,sum+(top[idx]*2));
        int c=dfs(top,idx+1,sum);
        
        sum=closest(a,closest(b,c));
        return sum;
    }
    
    int closestCost(vector<int>& baseCosts, vector<int>& toppingCosts, int t) {
        target=t;
        int ans=0;
        for(int i=0;i<baseCosts.size();i++){
            ans=closest(dfs(toppingCosts,0,baseCosts[i]),ans);        
        }
        return ans;
    }
};