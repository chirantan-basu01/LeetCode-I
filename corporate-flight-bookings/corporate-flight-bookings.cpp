class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& a, int n) {
        
        vector<int> d(n + 1,0);
        
        for(int i = 0; i < a.size(); i++)
        {
            d[a[i][0] - 1] += a[i][2];
            d[a[i][1]] -= a[i][2];
        }
        
        for(int i = 1; i <= n; i++) d[i] += d[i - 1];
        
        d.pop_back();
        
        return d;
    }
};