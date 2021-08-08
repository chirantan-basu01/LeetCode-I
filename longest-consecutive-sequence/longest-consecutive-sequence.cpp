class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!size(nums))
            return 0;
        sort(begin(nums),end(nums));
        int longest=0,curr_longest=1;
        for(int i=1;i<size(nums);i++)
            if(nums[i]==nums[i-1])
                continue;
            else if(nums[i]==nums[i-1]+1)
                curr_longest++;
            else{
                longest=max(longest,curr_longest);
                curr_longest=1;
            }
        return max(longest,curr_longest);
    }
};