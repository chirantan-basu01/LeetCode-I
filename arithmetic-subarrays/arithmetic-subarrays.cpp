class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>res;
        for(int i=0;i<l.size();i++){
            if(r[i]-l[i]<2)
                res.push_back(true);
            else{
                vector<int>temp(nums.begin()+l[i],nums.begin()+r[i]+1);
                sort(temp.begin(),temp.end());
                bool flag=false;
                int diff=abs(temp[0]-temp[1]);
                
                for(int j=2;j<=r[i]-l[i];j++){
                    if(temp[j]-temp[j-1]!=diff){
                        flag=true;
                        break;
                    }
                }
                res.push_back(!flag);
            }
        }
        return res;
    }
};