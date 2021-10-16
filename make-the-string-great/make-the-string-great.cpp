class Solution {
public:
    string makeGood(string s) {
        string ans;
        stack<char>stk;
        if(s.size()<2)
            return s;
        for(int i=0;i<s.size();i++){
            if(!stk.empty() and abs(stk.top()-s[i])=='a'-'A'){
                stk.pop();
            }
            else{
                stk.push(s[i]);
            }
        }
        while(!stk.empty()){
            ans+=stk.top();
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};