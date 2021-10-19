class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string>res;
        
        int req[26]={0};
        
        for(auto word:words2){
            int newreq[26]={0};
            for(auto ch:word)
                newreq[ch-'a']++;
            for(int i=0;i<26;i++)
                req[i]=max(req[i],newreq[i]);
        }
        
        for(auto word:words1){
            int demand[26]={0};
            bool flag=true;
            for(auto ch:word)
                demand[ch-'a']++;
            for(int i=0;i<26;i++){
                if(demand[i]<req[i]){
                    flag=false;
                    // break;
                }
            }
            if(flag)
                res.push_back(word);
        }
        return res;
    }
};