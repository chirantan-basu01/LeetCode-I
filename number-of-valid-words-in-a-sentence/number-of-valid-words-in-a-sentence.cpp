class Solution {
public:
    bool valid(string x){
        int n=x.size();
            if(n==0){
                return false;
            }
        int p=n-1;
        if(x[p]=='!' || x[p]==',' || x[p]=='.'){
            n--;
        }
        int h=0;
        for(int i=0;i<n;i++){
            if(x[i]=='-'){
                h++;
                if(h==1 and i-1>=0 and i+1<n){
                    
                }
                else{
                    return false;
                }
            }
            if(x[i]<'a' || x[i]>'z'){
                if(x[i]!='-'){
                    return false;
                }
                
            }
        }
        return true;
    }
    
    int countValidWords(string sentence) {
        
        int count=0,p=0,last=0;
        
        while(p<sentence.size()){
            if(sentence[p]==' '){
                if(valid(sentence.substr(last,p-last))){
                    count++;
                }
                 last=p+1;
            }
            p++;
        }
        if(valid(sentence.substr(last,p-last+1))){
            count++;
        }
        return count;
    }
};