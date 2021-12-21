class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        map<int,int>mp;
        
        for(auto &it:arr){
            int currentRem=it%k;
            if(it<0)
                currentRem=((it%k)+k)%k;
            mp[currentRem]++;
        }
        
        for(auto &it:arr){
            int currentRem=it%k;
            if(currentRem==0 and mp[currentRem]%2==0)
                continue;
            if(mp[currentRem]!=mp[k-currentRem])
                return false;
        }
        return true;
    }
};