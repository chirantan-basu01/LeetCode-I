class Solution {
public:
    string replaceDigits(string s) {
        for(int i=0;i<s.size();i++){
            if(i%2!=0){
                s[i]-=48;
                s[i]=s[i-1]+s[i];
            }
        }
        return s;
    }
};