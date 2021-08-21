class Solution {
public:
    int maxPower(string s) {
        int maxi=1;
        int curr=1;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                curr++;
            }
            else{
                if(curr>maxi)
                    maxi=curr;
                curr=1;
            }
        }
        if(curr>maxi)
            maxi=curr;
        return maxi;
    }
};