class Solution {
public:
    int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& rowCosts, vector<int>& colCosts) {
        if(startPos[0]==homePos[0] and startPos[1]==homePos[1])
            return 0;
        int count=0;
        
        int x1=startPos[0];
        int x2=homePos[0];
        
        int y1=startPos[1];
        int y2=homePos[1];
        
        if(x1>x2){
            while(x1!=x2){
                x1--;
                count+=rowCosts[x1];
            }
        }
        else{
            while(x1!=x2){
                x1++;
                count+=rowCosts[x1];
            }
        }
        
        if(y1>y2){
            while(y1!=y2){
                y1--;
                count+=colCosts[y1];
            }
        }
        else{
            while(y1!=y2){
                y1++;
                count+=colCosts[y1];
            }
        }
        return count;
    }
};