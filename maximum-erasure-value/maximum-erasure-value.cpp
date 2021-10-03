class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        int cursum=0,l=0,r=0,ans=0;
        unordered_set<int>s;
        while(r<n){
            while(s.find(nums[r])!=s.end())
                cursum-=nums[l],s.erase(nums[l++]);
            cursum+=nums[r],s.insert(nums[r++]);
            ans=max(ans,cursum);
        }
        return ans;
    }
};