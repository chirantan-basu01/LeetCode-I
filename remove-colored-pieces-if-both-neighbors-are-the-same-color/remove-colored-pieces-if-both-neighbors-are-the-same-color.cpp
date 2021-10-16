class Solution {
public:
    bool winnerOfGame(string colors) {
        int n = colors.size() ;
        int c=0, d=0 ;
        for(int i=1;i<=n-2 ; i++){
            if(colors[i] =='A' and colors[i] ==colors[i+1] and colors[i] ==colors[i-1])
                c++ ;
            else if(colors[i] =='B' and colors[i] ==colors[i+1] and colors[i] ==colors[i-1])     
                d++ ;
        }
        if(c>d)
            return true;
        else
            return false;
    }
};