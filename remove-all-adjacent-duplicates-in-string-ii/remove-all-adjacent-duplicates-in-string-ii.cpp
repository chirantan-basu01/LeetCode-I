class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        st.push({'#',0});
        for(int i=0;i<s.size();i++){
            st.push({s[i],st.top().first==s[i]?st.top().second+1:1});
            if(st.top().second==k){
                while(s[i]==st.top().first)
                    st.pop();
                s.erase(i-k+1,k);
                i-=k;
            }
        }
        return s;
    }
};