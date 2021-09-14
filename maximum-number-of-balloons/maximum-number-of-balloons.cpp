class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int bcount=0,acount=0,lcount=0,ocount=0,ncount=0;
        for(int i=0;i<text.size();i++){
            if(text[i]=='b')
                bcount++;
            else if(text[i]=='a')
                acount++;
            else if(text[i]=='l')
                lcount++;
            else if(text[i]=='o')
                ocount++;   
            else if(text[i]=='n')
                ncount++;
        }
        lcount=lcount/2;
        ocount=ocount/2;
        
        return min({bcount,acount,lcount,ocount,ncount});
    }
};