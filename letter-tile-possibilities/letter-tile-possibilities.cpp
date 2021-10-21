class Solution {
public:
    
    void backtrack(string path,unordered_map<int,bool>&visited,string tiles,set<string>&ans){
        ans.insert(path);
        
        for(int i=0;i<tiles.size();i++){
            
            if(visited[i]==true){
                continue;
            }
            path.push_back(tiles[i]);
            visited[i]=true;
            backtrack(path,visited,tiles,ans);
            visited[i]=false;
            path.pop_back();
        }
    }
    
    int numTilePossibilities(string tiles) {
        set<string>ans;
        unordered_map<int,bool>visited;
        
        for(int i=0;i<tiles.size();i++){
            visited[i]=false;
        }
        
        string path="";
        
        backtrack(path,visited,tiles,ans);
        
        return ans.size()-1;
    }
};