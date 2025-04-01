class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; ++i) {
            unordered_set<char> rowSet, colSet, boxSet;
            for (int j = 0; j < 9; ++j) {
                
                if (board[i][j] != '.') {
                    if (rowSet.find(board[i][j]) != rowSet.end()) {
                        return false;
                    }
                    rowSet.insert(board[i][j]);
                }

                
                if (board[j][i] != '.') {
                    if (colSet.find(board[j][i]) != colSet.end()) {
                        return false;
                    }
                    colSet.insert(board[j][i]);
                }

                int boxRow = 3 * (i / 3) + j / 3;
                int boxCol = 3 * (i % 3) + j % 3;
                if (board[boxRow][boxCol] != '.') {
                    if (boxSet.find(board[boxRow][boxCol]) != boxSet.end()) {
                        return false;
                    }
                    boxSet.insert(board[boxRow][boxCol]);
                }
            }
        }
        return true;
    }
};
