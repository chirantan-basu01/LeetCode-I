class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        map<char,int>ans;
        for(auto ch:words[0]){
            ans[ch]++;
        }
        
        map<char,int>curr;
        for(auto &word:words){
            curr.clear();
            for(auto ch:word){
                curr[ch]++;
            }
            for(auto &it:ans){
                it.second=min(it.second,curr[it.first]);
            }
        }
        
        vector<string>sol;
        string s;
        for(auto &it:ans){
            while(it.second!=0){
                s=it.first;
                sol.push_back(s);
                it.second--;
            }
        }
        return sol;
    }
};