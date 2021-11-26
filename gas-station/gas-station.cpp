class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int deficit=0,start=0,cal=0;
        for(int i=0;i<gas.size();i++){
            cal+=gas[i]-cost[i];
            if(cal<0){
                start=i+1;
                deficit+=cal;
                cal=0;
            }
        }
            return (cal+deficit)>=0?start:-1;
    }
};