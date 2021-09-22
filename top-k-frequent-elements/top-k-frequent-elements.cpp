class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
        map<int,int>mp;
        vector<pair<int,int>>res;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            res.push_back({it.second,it.first});
        }
        sort(res.begin(),res.end(),greater());
        for(int i=0;i<k;i++){
            ans.push_back(res[i].second);
        }
        return ans;
    }
};