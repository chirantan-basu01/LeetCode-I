class Solution {
public:
    int minimumMoves(string s) {
        int ans=0;
        for(int i=0;i<s.size();i=i){
            if(s[i]=='X'){
                i+=3;
                ans++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};