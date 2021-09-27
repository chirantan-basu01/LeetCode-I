class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size(),m=p.size();
        vector<int>res,pv(26,0),sv(26,0);
        
        for(int i=0;i<m;i++){
            pv[p[i]-'a']++;
        }
        int i=0;int j=0;
        while(j<n){
            sv[s[j]-'a']++;
            
            if((j-i+1)<m){
                j++;
            }
            else if((j-i+1)==m){
                if(pv==sv)
                    res.push_back(i);
                sv[s[i]-'a']--;
    
                i++;
                j++;
            }
        }
        return res;
    }
};