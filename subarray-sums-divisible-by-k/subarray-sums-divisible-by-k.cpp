#include<bits/stdc++.h>
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int pref=0;
        vector<int>cPref(k);
        cPref[pref]++;
        
        int ans=0;
        for(int i=0;i<nums.size();i++){
            pref=(pref+nums[i])%k;
            cout<<pref<<" ";
            if(pref<0){
                pref+=k;
                // cout<<pref<<endl;
            }
            ans+=cPref[pref];
            // cout<<ans<<" ";
            cPref[pref]++;
        }
        return ans;
    }
};