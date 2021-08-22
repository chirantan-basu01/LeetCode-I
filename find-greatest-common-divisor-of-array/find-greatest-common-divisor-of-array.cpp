class Solution {
public:
    int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
    
    int findGCD(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        int ans=gcd(maxi,mini);
        return ans;
    }
};