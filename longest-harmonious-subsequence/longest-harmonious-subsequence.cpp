class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>ump;
        int res=0;
        for(auto it:nums){
            ump[it]++;
            if(ump.count(it+1))
                res=max(res,ump[it]+ump[it+1]);
            if(ump.count(it-1))
                res=max(res,ump[it]+ump[it-1]);
        }
        return res;
    }
};