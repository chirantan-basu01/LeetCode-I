class Solution {
public:
    vector<vector<int>>answer;
    
    
    void helper(int n,int k,int idx,vector<int>&current){
        if(k==current.size()){
            answer.push_back(current);
            return;
        }
        for(int i=idx;i<n+1;i++){
            current.push_back(i);
            helper(n,k,i+1,current);
            current.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>current;
        helper(n,k,1,current);
        return answer;
    }
};