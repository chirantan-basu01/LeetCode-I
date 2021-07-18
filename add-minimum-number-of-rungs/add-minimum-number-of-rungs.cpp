class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int result=0;
        int pre=0;
        for(auto a:rungs){
            result+=(a-pre-1)/dist;
            pre=a;
        }
        return result;
    }
};