class Solution {
public:
    long long countVowels(string a) {
        long long ans=0;
        long long n=a.size();
        for(long long k=0;k<n;k++){
            if(a[k]=='a' || a[k]=='e' || a[k]=='i' || a[k]=='o' || a[k]=='u'){
                ans+=(k+1)*(n-k);
            }
        }
        return ans;
    }
};