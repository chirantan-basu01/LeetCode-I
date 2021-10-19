class Solution {
public:
    bool isValid(string s) {
        while(!s.empty()){
            auto pos=s.find("abc");
            if(pos==string::npos){
                return false;
            }
            s.erase(pos,3);
        }
        return true;
    }
};