class Solution {
public:
    string removeKdigits(string num, int k) {
        string res="";
        int n=num.size();
        int keep=n-k;
        
        for(auto &c:num){
            while(k and res.size() and res.back()>c){
                res.pop_back();
                --k;
            }
            res.push_back(c);
        }
        res.resize(keep);
        
        while(!res.empty() and res[0]=='0')
            res.erase(res.begin());
        
        return res.empty()?"0":res;
    }
};