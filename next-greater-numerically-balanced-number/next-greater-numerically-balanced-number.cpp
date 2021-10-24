class Solution {
public:
    bool isValid(int n){
        vector<int>map(10,0);
        while(n){
            int lastDigit=n%10;
            map[lastDigit]++;
            n=n/10;
        }
        for(int i=0;i<10;i++){
            if(map[i] and map[i]!=i)
                return false;
        }
        return true;
    }
    
    int nextBeautifulNumber(int n) {
        while(true){
            n++;
            if(isValid(n))
                return n;
        }
        return 1;
    }
};