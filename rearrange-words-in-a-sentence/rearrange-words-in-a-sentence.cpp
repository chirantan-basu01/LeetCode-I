class Solution {
public:
    string arrangeWords(string text) {
        map<int,string>mp;
        string res="";
        
        for(int i=0;i<text.size();i++){
            string word="";
            while(isalpha(text[i])){
                word+=tolower(text[i]);
                i++;
            }
            mp[word.size()]+=word+" ";
        }
        for(auto it:mp){
            res+=it.second;
        }
        res.pop_back();
        res[0]=toupper(res[0]);
        return res;
    }
};