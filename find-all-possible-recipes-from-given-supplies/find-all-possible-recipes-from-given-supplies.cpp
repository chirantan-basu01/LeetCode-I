class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        unordered_map<string,bool> um;
        vector<string> res;
        for(auto &str:supplies)
            um[str]=true;
        bool flag=true;
        int n=recipes.size();
        vector<int> visited(n,0);
        while(flag)
        {
             flag=false;
            for(int i=0;i<n;i++)
            {
                if(visited[i]==1)
                    continue;
                int count=ingredients[i].size();
                for(auto &s:ingredients[i])
                {
                    if(um.find(s)!=um.end())
                        count--;
                }
                if(count==0)
                {
                    flag=true;
                    visited[i]=1;
                    um[recipes[i]]=true;
                    res.push_back(recipes[i]);
                }
            }
        }
      return res;
    }
};