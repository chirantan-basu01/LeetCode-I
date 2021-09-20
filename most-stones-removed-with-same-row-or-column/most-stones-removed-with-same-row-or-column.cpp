class Solution {
public:
    vector<int>parent;
    
    int findParent(int x){
        if(parent[x]==x)
            return x;
        return parent[x]=findParent(parent[x]);
    }
    
    bool _union(int x,int y){
        int xp=findParent(x);
        int yp=findParent(y);
        
        if(xp==yp)
            return false;
        
        parent[yp]=xp;
        return true;
    }
    
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        parent.resize(n);
        
        
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
        
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(stones[i][0]==stones[j][0] || stones[i][1]==stones[j][1]){
                    if(_union(i,j)){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};