class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
            return "";
        
        for(int i=0;i<strs[0].length();i++){
            char curr_char=strs[0][i];
            for(auto s:strs){
                if(i>=s.length() || s[i]!=curr_char){
                    return s.substr(0,i);
                }
            }
        }
        return strs[0];
    }
};