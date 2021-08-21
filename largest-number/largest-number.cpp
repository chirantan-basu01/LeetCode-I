bool cmp(string a,string b){
        return a+b>b+a;
    }
    
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>ans;
        
        for(auto i:nums)
            ans.push_back(to_string(i));
        
        sort(ans.begin(),ans.end(),cmp);
        string result;
        for(int i=0;i<ans.size();i++){
            result+=ans[i];
        }
        return result[0]=='0'?"0":result;
    }
};