class Solution {
public:

    bool isValid(vector<vector<char>>& board, int i, int j, char n) {
        for(int k = 0; k < board.size(); k++) {
            if(k != j && board[i][k] == n) return false;

            if(i != k && board[k][j] == n) return false;

            int subRow = 3*(i/3) + k/3;
            int subCol = 3*(j/3) + k%3;

            if((i != subRow && j != subCol) && board[subRow][subCol] == n) return false;
        }

        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {

        for(int i = 0; i < board.size(); i++) {
            for(int j = 0; j < board.size(); j++) {
                if(board[i][j] == '.') continue;
                if(!isValid(board, i, j, board[i][j])) {
                    return false;
                }
            }
        }

        return true;
    }
};