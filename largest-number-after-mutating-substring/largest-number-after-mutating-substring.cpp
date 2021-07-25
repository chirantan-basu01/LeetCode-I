class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        int n=num.size();
        for(int i=0;i<n;i++){
            int x=num[i]-'0';
            if(x<change[x]){
                while(i<n and num[i]-'0'<=change[num[i]-'0']){
                    num[i++]=change[num[i]-'0']+'0';
                }
                break;
            }
        }
    return num;
    }
};