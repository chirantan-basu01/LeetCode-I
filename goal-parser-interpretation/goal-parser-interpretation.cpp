class Solution {
public:
    string interpret(string command) {
        string m("");
        int n=command.length();
        for(int i=0;i<n;i++){
            if(command[i]=='G'){
                m+=command[i];
                continue;
            }
            if(command[i+1]==')'){
                m+='o';
                i=i+1;
                continue;
            }
            if(command[i+1]=='a' and command[i+2]=='l' and command[i+3]==')'){
                m+='a';
                m+='l';
                i=i+3;
                continue;
            }
        }
        return m;
    }
};