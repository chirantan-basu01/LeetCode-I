class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        st.push(s[0]);
        int size=s.size();
        for(int i=1;i<size;i++){
            if(!st.empty() && s[i]=='}' && st.top()=='{')
                st.pop();
            else if(!st.empty() && s[i]==')' && st.top()=='(')
                st.pop();
            else if(!st.empty() && s[i]==']' && st.top()=='[')
                st.pop();
            else st.push(s[i]);
        }
        if(st.empty())
            return true;
        return false;
    }
};