class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0,ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                count++;
            else 
                count--;
            if(count<0){
                ans+=abs(count);
                count=0;
            }
        }
        ans+=abs(count);
        return ans;
    }
};