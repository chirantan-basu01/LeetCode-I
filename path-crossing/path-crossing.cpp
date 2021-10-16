class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>>st;
        pair<int,int>p={0,0};
        st.insert(p);
        
        for(auto it:path){
            if(it=='N')
                p.first+=1;
            else if(it=='E')
                p.second+=1;
            else if(it=='S')
                p.first-=1;
            else if(it=='W')
                p.second-=1;
            
            if(st.find(p)!=st.end())
                return true;
            st.insert(p);
        }
        return false;
    }
};