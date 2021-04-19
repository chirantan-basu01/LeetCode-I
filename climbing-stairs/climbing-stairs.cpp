class Solution {
public:
    int climbStairs(int n) {
        int ans=1;
        int prePrev=1;
        int prev=1;
        for(int i=2;i<=n;i++){
            ans=prev+prePrev;
            prePrev=prev;
            prev=ans;
        }
        return ans;
    }
};