class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int flips=0,counter=0;
        for(auto ch:s){
            if(ch=='1')
                counter++;
            else
                flips++;
            flips=min(flips,counter);
        }
        return flips;
    }
};