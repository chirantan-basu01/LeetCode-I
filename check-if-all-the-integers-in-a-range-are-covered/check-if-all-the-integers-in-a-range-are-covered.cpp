class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int has[100]={0};
        
        for(auto a:ranges){
            for(int i=a[0];i<=a[1];i++){
                has[i]=1;
            }
        }
        
        for(int i=left;i<=right;i++){
            if(has[i]==0){
                return false;
            }
        }
        return true;
    }
    
};