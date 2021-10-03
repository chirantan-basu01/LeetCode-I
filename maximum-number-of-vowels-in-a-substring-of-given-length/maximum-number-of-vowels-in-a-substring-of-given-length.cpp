class Solution {
public:
    int maxVowels(string s, int k) {
        int curCount=0;
        int ans=0;
        bool vowels[26]={0};
        vowels[0]=vowels[4]=vowels[8]=vowels[14]=vowels[20]=1;
        for(int i=0;i<s.size();i++){
            if(i>=k and vowels[s[i-k]-'a'])
                curCount--;
            
            if(vowels[s[i]-'a'])
                curCount++;
            
            ans=max(ans,curCount);
        }
        return ans;
    }
};