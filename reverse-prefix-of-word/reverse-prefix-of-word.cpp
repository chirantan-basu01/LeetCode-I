class Solution {
public:
    string reversePrefix(string word, char ch) {
        string s;
        for(int i=0;i<word.size();i++){
            if(ch==word[i]){
                reverse(word.begin(),word.begin()+i+1);
                break;
            }
        }
        return word;
    }
};