class Solution {
public:
    
    vector<char>parent;
    
    char findparent(char x){
        if(parent[x]==x)
            return x;
        return findparent(parent[x]);
    }
    
    bool equationsPossible(vector<string>& equations) {
        int n=equations.size();
        parent.resize(26,0);
        
        for(int i=0;i<26;i++){
            parent[i]=i;
        }
        
        for(int i=0;i<n;i++){
            if(equations[i][1]=='='){
                int x=findparent(equations[i][0]-'a');
                int y=findparent(equations[i][3]-'a');
                if(x!=y){
                    parent[y]=x;
                }
            }
        }
        
        for(int i=0;i<n;i++){
            if(equations[i][1]=='!'){
                int x=findparent(equations[i][0]-'a');
                int y=findparent(equations[i][3]-'a');
                if(x==y){
                    return false;
                }
            }
        }
        return true;
    }
};