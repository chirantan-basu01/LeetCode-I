class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>ump;
        for(auto no:nums){
            ump[no]++;
        }
        for(auto it:ump){
            if(it.second==2){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};