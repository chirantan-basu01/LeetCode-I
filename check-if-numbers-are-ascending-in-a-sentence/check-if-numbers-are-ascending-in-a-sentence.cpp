class Solution {
public:
    bool areNumbersAscending(string s) {
        s.push_back(' ');
        int prev=-1;
        string num;
        
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(isdigit(ch))
                num+=ch;
            else if(ch==' ' and isdigit(s[i-1])){
                if(stoi(num)<=prev)
                    return false;
                prev=stoi(num);
                num="";
            }
        }
        return true;
    }
};