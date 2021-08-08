class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string n="";
        for(auto str:words){
            for(auto ch:str){
                n+=ch;
            }
            if(n==s)
                return true;
        }
        return false;
    }
};