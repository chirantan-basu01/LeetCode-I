class Solution {
public:
    int minDeletions(string s) {
        
        unordered_map<char,int>ump;
        unordered_set<int>seen;
        int ans=0;
        
        for(auto it:s){
            ump[it]++;
        }
        
        for(auto[k,v]:ump){
            while(seen.find(v)!=seen.end()){
                v--;
                ans++;
            }
            if(v>0)
                seen.insert(v);
        }
        return ans;
    }
};