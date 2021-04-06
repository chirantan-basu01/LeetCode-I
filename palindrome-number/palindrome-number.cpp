class Solution {
public:
    int reverse(int y)
{
    uint32_t x = abs(y);
    uint32_t r = 0;
    uint32_t M = y < 0 ? ((uint32_t)1<<31) : ((uint32_t)1<<31) - 1;
    while (x > 0)
    {
        if (r <= (M - x%10)/10)
        {                
            r = r*10 + x%10;
            x /= 10;
        }
        else
        {
            return 0;
        }
    }
    if (y < 0) return -r;
    return r;
}   
    bool isPalindrome(int x) {
    if (x < 0) return false;
    if (x < 10) return true;
    return reverse(x) - x == 0;
    }
};