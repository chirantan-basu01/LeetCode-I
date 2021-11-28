class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        int sz=2*k+1;
        vector<int>ans(n,-1);
        vector<long long>pre(n+1);
        
        pre[0]=0;
        pre[1]=nums[0];
        
        for(int i=2;i<=n;i++){
            pre[i]=pre[i-1]+nums[i-1];
        }
        for(int i=k;i<=(n-k-1);i++){
            ans[i]=(nums[i]+(pre[i]-pre[i-k])+(pre[i+k+1]-pre[i+1]))/sz;
        }
        return ans;
    }
};