class Solution {
public:
    bool isMatching(string str1, string str2){
        int n=str1.size();
        
        unordered_map<char,char>ump;
        vector<bool>visited(26,false);
        
        for(int i=0;i<n;i++){
            char c1=str1[i],c2=str2[i];
            
            if(ump[c1] and ump[c1]!=c2)
                return false;
            if(!ump[c1] and visited[c2-'a'])
                return false;
            
            ump[c1]=c2;
            visited[c2-'a']=true;
        }
        return true;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
            for(auto &word:words){
                if(isMatching(word,pattern)){
                    ans.emplace_back(word);
                }
            }
        return ans;
    }
};