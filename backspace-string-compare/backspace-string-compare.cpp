class Solution {
public:
    
    string getString(string &s){
        int n=s.size(),count=0;
        string result="";
        for(int i=n-1;i>=0;--i){
            char ch= s[i];
            if(ch=='#')
                count++;
            else{
                if(count>0)
                    count--;
                else
                    result+=ch;
            }
        }
        return result;
    }
    
    bool backspaceCompare(string s, string t) {
        return getString(s)==getString(t);
    }
};