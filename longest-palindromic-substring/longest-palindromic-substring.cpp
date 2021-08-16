class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n<2)
            return s;
        int start=0,length=1;
        vector<vector<int>>dp(n,vector<int>(n,0));
        
        //for window size 1
        for(int i=0;i<n;i++){
            dp[i][i]=1;
        }
        
        //for window size 2
        for(int j=0;j<n-1;j++){
            if(s[j]==s[j+1]){
                dp[j][j+1]=1;
                if(length<2){
                    start=j;
                    length=2;
                }
            }
        }
        
        //for length size 3 or more 
        for(int k=3;k<=n;k++){
            for(int l=0;l<n-k+1;l++){
                int m=l+k-1;
                if((s[l]==s[m])and dp[l+1][m-1]){
                    dp[l][m]=1;
                    if(k>length){
                        length=k;
                        start=l;
                    }
                }
            }
        }
        return s.substr(start,length);
    }
};