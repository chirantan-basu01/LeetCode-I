class Solution {
public:
    
    // values[i] + values[j] + i - j
    // values[i] + i + values[j] - j
    
    int maxScoreSightseeingPair(vector<int>& values) {
        int n=values.size();
        int ans=0,prev=values[0]+0;
        
        for(int i=1;i<n;i++){
            ans=max(ans,prev+values[i]-i);
            prev=max(prev,values[i]+i);
        }
        return ans;
    }
};