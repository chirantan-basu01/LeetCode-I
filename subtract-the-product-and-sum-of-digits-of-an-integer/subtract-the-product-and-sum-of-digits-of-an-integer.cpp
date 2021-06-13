class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1,s=0,t;
        
        while(n){
            t=n%10;
            s+=t;
            p*=t;
            n/=10;
        }
        return p-s;
    }
};