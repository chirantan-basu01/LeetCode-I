class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n=digits.size(),temp;
        set<int>ans;
        for(int i=0;i<n;i++){
            if(digits[i]!=0){
                for(int j=0;j<n;j++){
                    if(j!=i){
                        for(int k=0;k<n;k++){
                            if(k!=i and j!=k and digits[k]%2==0){
                                temp=(100*digits[i])+(10*digits[j])+digits[k];
                                ans.insert(temp);
                            }
                        }
                    }
                }
            }
        }
        vector<int>v;
        for(auto it:ans){
            v.push_back(it);
        }
        return v;
    }
};