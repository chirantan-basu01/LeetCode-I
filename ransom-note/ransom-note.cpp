class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>ump;
        
        for(int i=0;i<magazine.size();i++){
            ump[magazine[i]]++;
        }
        
        for(int i=0;i<ransomNote.size();i++){
            if(ump[ransomNote[i]]==0)
                return false;
            ump[ransomNote[i]]--;
        }
        return true;
    }
};