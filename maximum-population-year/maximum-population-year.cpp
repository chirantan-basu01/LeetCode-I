class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int ans,max=0;
        for(int i=1950;i<=2050;i++){
            int count=0;
            for(int j=0;j<logs.size();j++){
                if(i>=logs[j][0] && i<logs[j][1]){
                    count++;
                }
            }
            if(max<count){
                max=count;
                ans=i;
            }
        }
        return ans;
    }
};