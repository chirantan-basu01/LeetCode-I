class Solution {
public:
    int minimumBuckets(string street) {
        int ans=0;
        int n=street.size();
        
        for(int i=0;i<n;i++){
            if(street[i]=='H'){
                if(i-1>=0 and street[i-1]=='X'){
                    continue;
                }
                else  if(i+1<n and street[i+1]=='.'){
                    ans+=1;
                    street[i+1]='X';
                }
                else if(i-1>=0 and street[i-1]=='.'){
                    ans+=1;
                }
                else{
                    ans=-1;
                    return ans;
                }
            }
        }
        return ans;
    }
};