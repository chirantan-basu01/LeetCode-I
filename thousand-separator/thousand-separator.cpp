class Solution {
public:
    string thousandSeparator(int n) {
        string res=to_string(n);
        if(n>=1000){
            for(int i=res.size();i>0;i-=3){
                if(i<res.size()){
                    res.insert(i,".");
                }
            }
        }
        return res;
    }
};