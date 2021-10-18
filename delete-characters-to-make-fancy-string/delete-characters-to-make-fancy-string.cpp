class Solution {
public:
    string makeFancyString(string s) {
        string res;
        int count=0,prev=s[0];
        
        for(auto c:s){
            if(c==prev){
                count++;
            }
            else{
                count=1;
                prev=c;
            }
            if(count<3)
                res.push_back(c);
        }
        return res;
    }
};