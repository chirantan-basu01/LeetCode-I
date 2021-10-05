class Solution {
public:
    
    bool isNice(string s){
        unordered_set<char>st(begin(s),end(s));
        
        for(auto ch:s){
            if(!st.count(tolower(ch)) || !st.count(toupper(ch)))
                return false;
        }
        return true;
    }
    
    string longestNiceSubstring(string s) {
        string result ="";
        for(int i=0;i<s.size();i++){
            for(int j=0;j<s.size();j++){
                string temp=s.substr(i,j-i+1);
                if(isNice(temp) and temp.size()>result.size()){
                    result=temp;
                }
            }
        }
        return result;
    }
};