class Solution {
public:
    string smallestSubsequence(string s) {
        vector<bool>seen(26,false);
        vector<int>freq(26,0);
        
        for(auto ch:s)
            freq[ch-'a']++;
        
        stack<char>st;
        for(int i=0;i<s.size();i++){
            auto ch=s[i];
            freq[ch-'a']--;
            
            if(seen[ch-'a'])
                continue;
            while(st.size()!=0 and st.top()>ch and freq[st.top()-'a']>0){
                seen[st.top()-'a']=false;
                st.pop();
            }
            seen[ch-'a']=true;
            st.push(ch);
        }
        
        string res="";
        while(st.size()!=0){
            res+=st.top();
            st.pop();
        }
        reverse(begin(res),end(res));
        return res;
    }
};