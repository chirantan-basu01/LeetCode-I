class Solution {
public:
    int reverse(int x) {
        long n=x;
        long num=0;
        while(n!=0){
            num=num*10+n%10;
            n=n/10;
        }
        if(num>INT_MAX){
            return 0;
        }
        if(num<INT_MIN){
            return 0;
        }
        return num;
    }
};