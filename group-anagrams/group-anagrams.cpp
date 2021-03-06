class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> groups;
        
        for(auto str:strs){
            string key=str;
            sort(key.begin(),key.end());
            groups[key].push_back(str);
        }
        
        vector<vector<string>>ans;
        for(auto it:groups){
            ans.push_back(it.second);
        }
        return ans;
    }
};