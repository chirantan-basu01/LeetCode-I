class Solution {
public:
    int find(vector<int>& parent,int x){
        if(parent[x]==x)
            return x;
        return parent[x]=find(parent,parent[x]);
    }
    
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n = accounts.size();
        vector<int> parent(n); // groups 0 ... n-1
        unordered_map< string, int > emailToGroup; // email -> group
    
        for (int i = 0; i < n; i++) {
            parent[i] = i; // init parent
            for( int j=1; j < accounts[i].size(); j++ ) {
                string email = accounts[i][j];
                if( emailToGroup.find( email ) != emailToGroup.end() ) {
                    // Union
                    int root1 = find( parent, i );
                    int root2 = find( parent, emailToGroup[email] );
                    parent[ root1 ] = root2;
                } else {
                    emailToGroup[ email ] = i;
                }
            }
        }
    
        unordered_map<int, vector<string>> groupToEmail;
        for( auto it : emailToGroup ) {
            int root = find( parent, it.second );
            groupToEmail[root].push_back( it.first );
        }
        
        // create result
        vector<vector<std::string>> res;
        for( auto it : groupToEmail ) {
            sort( it.second.begin(), it.second.end() );
            vector<string> tmp = { accounts[it.first][0] };
            tmp.insert( tmp.end(), it.second.begin(), it.second.end() );
            res.push_back( tmp );
        }
        return res;
    }
};