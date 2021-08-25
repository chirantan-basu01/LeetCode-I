class Solution {
public:
    bool judgeSquareSum(int c) {
        int lo=0;
        int hi=sqrt(c);
        while(lo<=hi){
            int temp=c-hi*hi;
            if(temp==lo*lo){
                return true;
            }
            else if(temp>lo*lo){
                lo++;
            }
            else{
                hi--;
            }
        }
        return false;
    }
};