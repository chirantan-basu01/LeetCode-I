class Solution {
public:
    int t1=0,t2=1,t3=1;
    long long int arr[38]={0};
    
    int tribonacci(int n) {
        if(n==0)
            return t1;
        if(n==1)
            return t2;
        if(n==2)
            return t3;
        if(arr[n]!=0)
            return arr[n];
        return arr[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
    }
};