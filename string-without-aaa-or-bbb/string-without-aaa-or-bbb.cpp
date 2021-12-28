class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string res;
        while(a and b){
            if(a>b){
                res+="aab";
                a--;
            }
            else if(b>a){
                res+="bba";
                b--;
            }
            else{
                res+="ab";
            }
            a--;
            b--;
        }
        while(a){
            a--;
            res+="a";
        }
        while(b){
            b--;
            res+="b";
        }
        
        return res;
    }
};