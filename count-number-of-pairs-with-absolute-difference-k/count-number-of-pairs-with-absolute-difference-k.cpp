class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1)
            return 0;
        sort(nums.begin(),nums.end());
        int pairs=0;
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                pairs=abs(nums[i]-nums[j]);
                if(pairs==k){
                    ans++;
                }
            }
        }
        return ans;
    }
};