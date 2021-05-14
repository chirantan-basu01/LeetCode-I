class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>trusts(n+1,0);
        
        for(auto person:trust){
            trusts[person[0]]--;
            trusts[person[1]]++;
        }
        
        for(int i=1;i<=n;i++){
            if(trusts[i]==n-1){
                return i;
            }
        }
        return -1;
    }
};