class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0,prefixSum=0;
        unordered_map<int,int>mp;
        
        mp[prefixSum]=1;
        for(int i=0;i<nums.size();i++){
            prefixSum+=nums[i];
            
            int rem=((prefixSum%k)+k)%k;
            if(mp.find(rem)!=mp.end()){
                ans+=mp[rem];
                mp[rem]++;
            }
            else
                mp[rem]=1;
        }
        return ans;
    }
};