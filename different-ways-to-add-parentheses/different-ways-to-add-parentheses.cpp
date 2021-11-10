class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        int n=expression.size();
        vector<int>res;
        
        for(int i=0;i<=n;i++){
            if(ispunct(expression[i])){
                for(auto a:diffWaysToCompute(expression.substr(0,i))){
                    for(auto b:diffWaysToCompute(expression.substr(i+1))){
                        if(expression[i]=='+')
                            res.push_back(a+b);
                        if(expression[i]=='-')
                            res.push_back(a-b);
                        if(expression[i]=='*')
                            res.push_back(a*b);
                    }
                }
            }
        }
        if(res.size()!=0)
            return res;
        else
            return vector<int>{stoi(expression)};
    }
};