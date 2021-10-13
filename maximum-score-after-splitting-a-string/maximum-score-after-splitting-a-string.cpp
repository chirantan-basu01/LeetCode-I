class Solution {
public:
    int maxScore(string s) {
        int leftzeros=0,rightones=0;
        for(auto c:s){
            if(c=='1')
                rightones++;
        }
        int score=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0')
                leftzeros++;
            else
                rightones--;
            score=max(score,leftzeros+rightones);
        }
        return score;
    }
};