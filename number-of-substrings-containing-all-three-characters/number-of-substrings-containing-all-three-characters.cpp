class Solution {
public:
    int numberOfSubstrings(string s) {
        map<int,int>mp;
        int count=0,left=0,right=0;
        int n=s.size();
        
        while(right<n){
            mp[s[right]]++;
            while(mp['a'] and mp['b'] and mp['c']){
                count+=n-right;
                mp[s[left++]]--;
            }
            right++;
        }
        return count;
    }
};