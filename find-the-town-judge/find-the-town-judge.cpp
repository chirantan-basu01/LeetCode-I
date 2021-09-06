class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.empty() and n==1)
            return 1;
        vector<int>outdegree(n+1,0);
        vector<int>indegree(n+1,0);
        
        for(auto it:trust){
            outdegree[it[0]]++;
            indegree[it[1]]++;
        }
        
        for(int i=1;i<=n;i++){
            if(indegree[i]==n-1 and outdegree[i]==0){
                return i;
            }
        }
        return -1;
    }
};