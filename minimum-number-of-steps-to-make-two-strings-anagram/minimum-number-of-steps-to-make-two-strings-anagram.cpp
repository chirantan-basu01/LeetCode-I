class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>mp;
        
        for(auto &ch:s){
            mp[ch]++;
        }
        for(auto &ch:t){
            mp[ch]--;
        }
        int ans=0;
        for(auto &it:mp){
            if(it.second<=0){
                ans+=it.second;
            }
        }
        return abs(ans);
    }
};