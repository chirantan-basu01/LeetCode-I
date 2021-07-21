class Solution {
public:
    unordered_map<string,bool>mp;
    bool solve(string X,string Y){
        if(X.compare(Y)==0)
            return true;
        if(X.length()<=1)
            return false;
        
        string key=X;
        key.push_back(' ');
        key.append(Y);
        if(mp.find(key)!=mp.end()){
            return mp[key];
        }   
        
        
        int n=X.size();
        bool flag=false;
        for(int i=1;i<=n-1;i++){
            if((solve(X.substr(0,i),Y.substr(n-i,i)) and solve(X.substr(i),Y.substr(0,n-i)))|| 
               (solve(X.substr(0,i),Y.substr(0,i)) and solve(X.substr(i),Y.substr(i)))){
                flag=true;
                break;
            }
        }
        return mp[key]=flag;
    }

    bool isScramble(string s1, string s2) {
        if(s1.length()!=s2.length())
            return false;
        return solve(s1,s2);
    }
};