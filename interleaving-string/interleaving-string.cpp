class Solution {
public:
    int t[101][101];
    
    bool lcs(string s1,string s2,string s3,int n1,int n2,int n3){
        if(t[n1+1][n2+1]!=-1){
            return t[n1+1][n2+1];
        }
        if(n1<0 and n2<0){
            return t[n1+1][n2+1]=true;
        }
        if(n1<0){
            if(s2[n2]==s3[n3]){
                return t[n1+1][n2+1]=lcs(s1,s2,s3,n1,n2-1,n3-1);
            }
            else{
                return t[n1+1][n2+1]=false;
            }
        }
        else if(n2<0){
             if(s1[n1]==s3[n3]){
                return t[n1+1][n2+1]=lcs(s1,s2,s3,n1-1,n2,n3-1);
            }
            else{
                return t[n1+1][n2+1]=false;
            }
        }
        if(s1[n1]==s3[n3] and s2[n2]==s3[n3]){
            return t[n1+1][n2+1]=lcs(s1,s2,s3,n1-1,n2,n3-1) or lcs(s1,s2,s3,n1,n2-1,n3-1);
        }
        else if(s1[n1]==s3[n3]){
            return t[n1+1][n2+1]=lcs(s1,s2,s3,n1-1,n2,n3-1);
        }
        else if(s2[n2]==s3[n3]){
             return t[n1+1][n2+1]=lcs(s1,s2,s3,n1,n2-1,n3-1);
        }
        return t[n1+1][n2+1]=false;
        
    }    

    
    bool isInterleave(string s1, string s2, string s3) {
        if((s1.size()+s2.size())!=s3.size()){
            return false;
        }
        memset(t,-1,sizeof(t));
        return lcs(s1,s2,s3,s1.size()-1,s2.size()-1,s3.size()-1);
    }
};