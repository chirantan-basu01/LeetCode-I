class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        auto it=find(nums.begin(),nums.end(),target);
        if(it!=nums.end()){
            int z=it-nums.begin();
            return z;
        }
        else{
            auto upper=upper_bound(nums.begin(),nums.end(),target);
            if(upper!=nums.end()){
                return upper-nums.begin();
            }
            return n;
        }
    }
};