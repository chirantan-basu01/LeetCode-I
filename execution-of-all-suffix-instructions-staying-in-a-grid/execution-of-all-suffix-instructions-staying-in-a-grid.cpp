class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& sP, string s) {
        int m=s.size(),j=0;
        vector<int>ans(m);
        
        while(j<m){
            int startRow=sP[0];
            int startCol=sP[1];
            int count=0;
            
            for(int k=j;k<m;k++){
                if(s[k]=='U' and startRow-1>=0){
                    count++;
                    startRow--;
                }
                else if(s[k]=='D' and startRow+1<n){
                    count++;
                    startRow++;
                }
                else if(s[k]=='R' and startCol+1<n){
                    count++;
                    startCol++;
                }
                else if(s[k]=='L' and startCol-1>=0){
                    count++;
                    startCol--;
                }
                else{
                    break;
                }
            }
            ans[j++]=count;
        }
        return ans;
    }
};