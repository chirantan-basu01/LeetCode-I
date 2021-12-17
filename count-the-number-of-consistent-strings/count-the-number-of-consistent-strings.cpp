class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<int,int>mp;
        int ans=0;
        
        for(auto &it:allowed){
            mp[it-'a']++;
        }
        
        for(auto &word:words){
            bool isConsistent=true;
            for(auto &ch:word){
                if(mp[ch-'a']==0){
                    isConsistent=false;
                    break;
                }
            }
            if(isConsistent)
                ans++;
        }
        return ans;
    }
};