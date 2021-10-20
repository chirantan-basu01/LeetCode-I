class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>w1(26,0),w2(26,0);
        set<char>st1,st2;
        
        for(auto it:word1){
            w1[it-'a']++;
            st1.insert(it);
        }
        
        for(auto it:word2){
            w2[it-'a']++;
            st2.insert(it);
        }
        
        sort(w1.begin(),w1.end());
        sort(w2.begin(),w2.end());
        
        return w1==w2 and st1==st2;
    }
};