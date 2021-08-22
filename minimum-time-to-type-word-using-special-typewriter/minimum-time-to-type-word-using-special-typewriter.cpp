class Solution {
public:
    int minTimeToType(string word) {
        int res=word.size();
        int pointer='a';
        
        for(auto ch:word){
            res+=min(abs(pointer-ch),26-abs(pointer-ch));
            pointer=ch;
        }
        return res;
    }
};