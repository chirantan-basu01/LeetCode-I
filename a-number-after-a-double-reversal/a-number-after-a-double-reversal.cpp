class Solution {
public:
    int reversDigits(int num){
        string strin = to_string(num);
        reverse(strin.begin(), strin.end());
        num = stoi(strin);
        return num;
    }
    bool isSameAfterReversals(int num) {
        int first=reversDigits(num);
        int second=reversDigits(first);
        
        if(second==num)
            return true;
        else
            return false;
    }
};