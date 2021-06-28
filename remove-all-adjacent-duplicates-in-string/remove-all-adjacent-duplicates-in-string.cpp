class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>stk;
        for(auto i:s){
            if(stk.empty())
                stk.push(i);
            else{
                if(i==stk.top()){
                    stk.pop();
                }
                else
                    stk.push(i);
            }
        }
        string ans;
        while(!stk.empty()){
            ans+=stk.top();
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};