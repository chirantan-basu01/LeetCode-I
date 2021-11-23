class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=9;
        unordered_set<char>rowSet[n];
        unordered_set<char>colSet[n];
        unordered_set<char>squareSet[n];
        
        for(int r=0;r<n;r++){
            for(int c=0;c<n;c++){
                char val=board[r][c];
                if(val=='.')
                    continue;
                int sPos=(r/3)*3+(c/3);
                if(rowSet[r].count(val)>0 || colSet[c].count(val)>0 || squareSet[sPos].count(val)>0)
                    return false;
                rowSet[r].insert(val);
                colSet[c].insert(val);
                squareSet[sPos].insert(val);
            }
        }
        return true;
    }
};