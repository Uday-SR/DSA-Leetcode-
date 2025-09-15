class Solution {
public:
    bool isWord(vector<vector<char>>& board, string word, int row, int col, int index) {
        if(index == word.size()) {
            return true;
        }

        if(row >= board.size() || row < 0 || col >= board[0].size() || col < 0 || board[row][col] != word[index]) {
            return false;
        }

        char temp = board[row][col];
        board[row][col] = '#';

        bool found = isWord(board, word, row+1, col, index+1) ||
                     isWord(board, word, row-1, col, index+1) ||
                     isWord(board, word, row, col+1, index+1) ||
                     isWord(board, word, row, col-1, index+1);

        board[row][col] = temp;

        return found;             
    }

    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size();
        int col = board[0].size();

        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(isWord(board, word, i, j, 0)) {
                    return true;
                }
            }
        }

        return false;
    }
};