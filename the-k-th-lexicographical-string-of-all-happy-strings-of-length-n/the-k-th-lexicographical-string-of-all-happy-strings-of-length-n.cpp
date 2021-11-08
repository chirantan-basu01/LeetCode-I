class Solution {
public:
    void helper(int n,string str,vector<string>&ans){
        if(n==0){
            ans.push_back(str);
            return;
        }
        
        if(str.back()!='a')
            helper(n-1,str+'a',ans);
        if(str.back()!='b')
            helper(n-1,str+'b',ans);
        if(str.back()!='c')
            helper(n-1,str+'c',ans);
    }
    
    string getHappyString(int n, int k) {
        vector<string>ans;
        helper(n,"",ans);
        if(k>ans.size())
            return "";
        return ans[--k];
    }
};