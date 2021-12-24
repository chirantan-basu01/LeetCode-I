class Solution {
public:
    int countPrimes(int n) {
        vector<bool>seen(n,false);
        int ans=0;
        for(int i=2;i<n;i++){
            if(seen[i])
                continue;
            ans++;
            for(long start=(long)i*i;start<n;start+=i){
                seen[start]=true;
            }
        }
        return ans;
    }
};