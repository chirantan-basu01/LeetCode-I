class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size(),col=matrix[0].size();
    vector<int> ans;
    if(row==1){
        for(int i=0;i<col;i++)ans.push_back(matrix[0][i]);
        return ans;
    }
    for(int i=0;i<row-1;i++){
        for(int j=i;j<col-i;j++){
            if(ans.size()==row*col)return ans;
            ans.push_back(matrix[i][j]);
        }
        for(int j=i+1;j<row-i;j++){
            if(ans.size()==row*col)return ans;
            ans.push_back(matrix[j][col-i-1]);
        }
        for(int j=col-2-i;j>=i;j--){
            if(ans.size()==row*col)return ans;
            ans.push_back(matrix[row-1-i][j]);
        }
        for(int j=row-2-i;j>i;j--){
            if(ans.size()==row*col)return ans;
            ans.push_back(matrix[j][i]);
        }
    }
return ans;
    }
};