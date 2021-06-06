class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char>s;
        for(int i=0;i<sentence.size();i++){
            s.insert(sentence[i]);
        }
        int n=s.size();
        
        if(n==26){
            return true;
        } 
        else{
            return false;
        }
    }
};