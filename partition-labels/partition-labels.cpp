class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>last(26,0);
        for(int i=0;i<s.size();i++){
            last[s[i]-'a']=i;
        }
        vector<int>res;
        int k=0,j=0;
        for(int i=0;i<s.size();i++){
            j=max(j,last[s[i]-'a']);
            if(i==j){
                res.push_back(i-k+1);
                k=i+1;
            }
        }
        return res;
    }
};