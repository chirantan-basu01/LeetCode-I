class Solution {
public:
    int titleToNumber(string columnTitle) {
        int len=columnTitle.size();
        int sum=0;
        for(int i=0;i<len;i++){
            sum+=(int(columnTitle[i]-'A'+1))*pow(26,len-1-i);
        }
        return sum;
    }
};