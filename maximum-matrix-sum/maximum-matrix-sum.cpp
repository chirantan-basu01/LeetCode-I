class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int small=INT_MAX;
        int count=0;
        long long int sum=0;
        int r=matrix.size(),c=matrix[0].size();
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int val=matrix[i][j];
                small=min(small,abs(val));
                if(val<0)
                    count++;
                sum+=abs(val);
            }
        }
        if(count%2==0)
            return sum;
        else
            return sum-2*small;
    }
};