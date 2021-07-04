class Solution {
public:
    const long long MOD=1000000007;
    long long fast_power(long long base, long long power) {
    long long result = 1;
    while(power > 0) {
        if(power % 2 == 1) { 
            result = (result*base) % MOD;
        }
        base = (base * base) % MOD;
        power = power / 2; 
    }
    return result;
}
    
    int countGoodNumbers(long long n) {
        long long ans=0;
        if (n % 2 == 0)
             ans=fast_power(5,floor(n/2))*fast_power(4,floor(n/2));
        else
            ans=fast_power(5, floor(n/2+1))*fast_power(4,floor (n/2));
        return ans%MOD;
    }
};