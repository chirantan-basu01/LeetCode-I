class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int n=s.size();
        int left=0,res=0,count=0;
        
    //  maximum substring of 'T' which contains k 'F'
        for(int i=0;i<n;i++){
            if(s[i]=='F')
                count++;
            while(count>k){
                if(s[left]=='F')
                    count--;
                left++;
            }
            res=max(res,i-left+1);
        }
        count=0,left=0;
    //  maximum substring of 'F' which contains k 'T'
        for(int i=0;i<n;i++){
            if(s[i]=='T')
                count++;
            while(count>k){
                if(s[left]=='T')
                    count--;
                left++;
            }
            res=max(res,i-left+1);
        }
        return res;
    }
};