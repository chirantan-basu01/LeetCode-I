class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_num=matrix.size();
        int col_num=matrix[0].size();
        
        int begin=0;
        int end=col_num-1;
        
        while(begin<row_num and end>=0){
            
            if(matrix[begin][end]==target)
               return true;
            
            else if(matrix[begin][end]>target)
                end--;
            else 
                begin++;
        }
        return false;
    }
};