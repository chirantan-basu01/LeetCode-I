class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0,R=0,L=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R'){
                R++;
               if(R==L){
                   count++;
                   R=0,L=0;
               }
            }
            else{
                L++;
                if(R==L){
                    count++;
                    R=0,L=0;
                }
            }
        }
        return count;
    }
};