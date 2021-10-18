class Solution {
public:
    int minimumDeletions(string s) {
        int as=0,bs=0;
        
        for(auto it:s){
            if(it=='a')
                as++;
        }
        int del=as;
        for(auto it:s){
            if(it=='b')
                bs++;
            else 
                as--;
            del=min(del,(as+bs));
        }
        return del;
    }
};