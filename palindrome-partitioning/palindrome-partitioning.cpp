class Solution {
public:
    bool isPalindrome(string s,int start,int end){
        while(start<=end){
            if(s[start++]!=s[end--]){
                return false;
            }
        }
        return true;
    }
    
    void helper(int idx,vector<vector<string>>&ans,vector<string>&path,string s){
        if(idx==s.size()){
            ans.push_back(path);
            return;
        }    
        for(int i=idx;i<s.size();i++){
            if(isPalindrome(s,idx,i)){
                path.push_back(s.substr(idx,i-idx+1));
                helper(i+1,ans,path,s);
                path.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>path;
        helper(0,ans,path,s);
        return ans;
    }
};