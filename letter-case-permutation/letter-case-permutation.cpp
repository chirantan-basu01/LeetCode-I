class Solution {
public:
    vector<string>ans;
    void helper(string curr,string s,int idx){
        
        //base case
        if(idx==s.size()){
            ans.push_back(curr);
            return;
        }
        //for digit
        if(isdigit(s[idx])){
            curr.push_back(s[idx]);
            helper(curr,s,idx+1);
        }
        else{
            //for lower case
            string c1=curr;
            c1.push_back(tolower(s[idx]));
            helper(c1,s,idx+1);
            
            //for upper case
            string c2=curr;
            c2.push_back(toupper(s[idx]));
            helper(c2,s,idx+1);
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        ans.clear();
        helper("",s,0);
        return ans;
    }
};