class Solution {
public:
    int arrangeCoins(int n) {
         int rows = 1;
        while(n > 0) {     // iterate till we have coins left
            rows++;        // move to next row
            n -= rows;     // fill current row by subtracting from available coins
        }
        return rows - 1;
    }
};