class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int n=position.size();
        int odd_count=0,even_count=0;
        
        for(auto i:position){
            if(i%2!=0){
                odd_count++;
            }
            else{
                even_count++;
            }
        }
        return min(odd_count,even_count);
    }
};