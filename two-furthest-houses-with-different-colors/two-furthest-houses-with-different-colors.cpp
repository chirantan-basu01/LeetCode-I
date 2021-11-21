class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size();
        int forward=0,backward=0;
        
        //first pass
        for(int i=0;i<n;i++){
            if(colors[n-1]!=colors[i]){
                backward=(n-1)-i;
                break;
            }
        }
        
        //second pass
        for(int i=n-1;i>=0;i--){
            if(colors[i]!=colors[0]){
                forward=i;
                break;
            }
        }
        return max(backward,forward);
    }
};