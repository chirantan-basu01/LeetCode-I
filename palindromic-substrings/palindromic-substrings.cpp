class Solution {
public:
    bool helper(string &s,int i,int j){
        if(i>=j)
            return true;
        if(s[i]!=s[j]){
            return false;
        }
        return helper(s,i+1,j-1);
    }
    
    int countSubstrings(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(helper(s,i,j)){
                    count++;
                }
            }
        }
        return count;
    }
};