class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fives=0,tens=0;
        for(auto &it:bills){
            if(it==5)
                fives++;
            else if(it==10){
                if(fives==0)
                    return false;
                tens++;
                fives--;
            }
            else{
                if(fives>0 and tens>0){
                    tens--;
                    fives--;
                }
                else if(fives>=3){
                    fives-=3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};