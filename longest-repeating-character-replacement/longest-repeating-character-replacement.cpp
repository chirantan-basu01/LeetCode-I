class Solution {
public:
    int characterReplacement(string s, int k) {
      int size=s.size();
        int res=0;
        vector<int>count(26,0);
        int start=0;
        int end=0;
        int globalMaxFreq=0;
        for(;end<size;end++){
            count[s[end]-'A']+=1;
            globalMaxFreq=max(globalMaxFreq,count[s[end]-'A']);
            
            if((end-start+1)-globalMaxFreq>k){
                res=max(res,(end-start));
                count[s[start]-'A']-=1;
                start+=1;
            }
        }
        return max(res,end-start);
    }
};