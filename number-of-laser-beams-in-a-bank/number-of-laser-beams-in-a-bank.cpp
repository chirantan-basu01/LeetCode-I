class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int totalBeans = 0, curSecurity = 0, prevSecurity = 0;
        
        for(string &floor: bank) {
            curSecurity = count(floor.begin(), floor.end(), '1');
            if(curSecurity) {
                totalBeans += (curSecurity * prevSecurity);
                prevSecurity = curSecurity;
            }
        }
        
        return totalBeans;
    }
};