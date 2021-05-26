class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>copy(nums);
        vector<int>res;
        
        sort(copy.begin(),copy.end());
        auto it=copy.begin();
        for(int i=0;i<nums.size();i++){
            it=find(copy.begin(),copy.end(),nums[i]);
            res.push_back(it-copy.begin());
        }
        return res;
    }
};