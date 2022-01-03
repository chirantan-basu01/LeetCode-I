class Solution {
public:
    long long int solve(vector<int>&s,int k){

        int ans=0,distinctCount=0,release=0;
        unordered_map<int,int>mp;
    
        for(int acquire=0;acquire<s.size();acquire++){
            int currChar=s[acquire];
    
            if(mp.find(currChar)!=mp.end()){
                mp[currChar]++;
            }
            else{
                distinctCount++;
                mp[currChar]=1;
            }
    
            while(release<=acquire and distinctCount>k){
                int discardChar=s[release];
                mp[discardChar]--;
                release++;
    
                if(mp[discardChar]==0){
                    mp.erase(discardChar);
                    distinctCount--;
                }
            }
            ans+=(acquire-release+1);
        }
        return ans;
    }
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums,k)-solve(nums,k-1);
    }
};