#define ll long long
class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n=grid[0].size();
        ll pre1[n+1];
        ll pre2[n+1];
        pre1[0]=grid[0][0];
        pre2[0]=grid[1][0];
        for(int i=1;i<n;i++){
            pre1[i]=pre1[i-1]+grid[0][i];
            pre2[i]=pre2[i-1]+grid[1][i];
        }
        ll res=LONG_MAX;
        
        for(int i=0;i<n;i++){
            ll op1=pre1[n-1]-pre1[i];
            ll op2= i==0?0:pre2[i-1];
            
            res=min(res,max(op1,op2));
        }
        return res;
    }
};