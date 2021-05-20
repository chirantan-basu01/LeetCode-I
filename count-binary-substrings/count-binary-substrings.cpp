class Solution {
public:
    int countBinarySubstrings(string s) {
        int curConsecutive=1,preConsecutive=0,ans=0;
        
        for(int i=1;i<s.size();i++){
            if(s[i]!=s[i-1]){
                ans+=min(curConsecutive,preConsecutive);
                preConsecutive=curConsecutive;
                curConsecutive=1;
            }    
            else{
                curConsecutive++;
            }
        }
        ans+=min(preConsecutive,curConsecutive);
        return ans;
    }
};