class Solution {
public:
    string toLowerCase(string s) {
        for(auto &c:s){
            if(c>='A' and c<='Z'){
                c+='a'-'A';
            }
        }
        return s;
    }
};