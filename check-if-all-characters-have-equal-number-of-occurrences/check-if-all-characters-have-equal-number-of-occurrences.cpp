class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<int,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]-'a']++;
        }
        for(int i=0;i<s.size()-1;i++){
            if(mp[s[i+1]-'a']!=mp[s[i]-'a']){
                return false;
            }
        }
        return true;
    }
};