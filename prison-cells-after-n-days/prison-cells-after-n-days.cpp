class Solution {
public:
    
    void prison(vector<int>& cells,int n){
        for(int i=0;i<n;i++){
            vector<int>v(8,0);
            for(int i=1;i<7;i++)
                if(cells[i-1]==cells[i+1])
                    v[i]=1;
                else
                    v[i]=0;
            cells=v;
        }
    }
    
    vector<int> prisonAfterNDays(vector<int>& cells, int n) {
        if(n==0)
            return cells;
        prison(cells,1);
        prison(cells,(n-1)%14);
        
        return cells;
    }
};