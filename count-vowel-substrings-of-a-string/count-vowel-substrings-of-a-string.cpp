class Solution {
public:
    int countVowelSubstrings(string a) {
        int n=a.size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                bool valid=true;
                set<int>x;
                for(int k=i;k<=j;k++){
                    if(a[k]=='a' || a[k]=='e' || a[k]=='i' || a[k]=='o' || a[k]=='u'){
                        x.insert(a[k]);
                    }
                    else{
                        valid=false;
                        break;
                    }
                }
                if(valid and x.size()==5){
                    ans+=1;
                }
            }
        }
        return ans;
    }
};