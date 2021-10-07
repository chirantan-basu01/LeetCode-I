class Solution {
public:
    
    bool checkCommon(vector<int>&a,vector<int>&b){
        for(int i=0;i<a.size();i++){
            if(a[i]>0 and b[i]>0)
                return true;
        }
        return false;
    }
    
    int maxProduct(vector<string>& words) {
        int n=words.size(),ans=0;
        vector<vector<int>>dicts(n,vector<int>(26,0));
        for(int i=0;i<n;i++){
            for(auto ch:words[i])
                dicts[i][ch-'a']=1;
            
            for(int j=0;j<i;j++)
                if(!checkCommon(dicts[i],dicts[j]))
                    ans=max(ans,int(size(words[i])*size(words[j])));
        }
        return ans;
    }
};