class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>v;
        int m=grid.size();
        int n=grid[0].size();
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v.push_back(grid[i][j]);
            }
        }
        sort(v.begin(),v.end());
        int target=v[v.size()/2];
        int ans=0;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(target==grid[i][j])
                    continue;
                int rem=abs(target-grid[i][j]);
                if(rem%x!=0)
                    return -1;
                rem=rem/x;
                ans+=(rem==0?1:rem);
            }
        }
        return ans;
    }
};