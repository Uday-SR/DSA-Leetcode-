class Solution {
public:

    bool isSafe(int row, int col, vector<string> &board, int n) {
        int originalRow = row;
        int originalCol = col;

        while(row >= 0 && col >= 0) {
            if(board[row][col] == 'Q') {
                return false;
            }
            row--;
            col--;
        }

        row = originalRow;
        col = originalCol;

        while(col >= 0) {
            if(board[row][col] == 'Q') {
                return false;
            }
            col--;
        }

        row = originalRow;
        col = originalCol;

        while(row < n && col >= 0) {
            if(board[row][col] == 'Q') {
                return false;
            }
            row++;
            col--;
        }

        row = originalRow;
        col = originalCol;

        return true;
    }

    void solve(int n, vector<vector<string>> &ans, vector<string> &board, int col) {
        if(col == n) {
            ans.push_back(board);
            return;
        }

        for(int row = 0; row < n; row++) {
            if(isSafe(row, col, board, n)) {
                board[row][col] = 'Q';
                solve(n, ans, board, col+1);
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);

        string s(n, '.');

        for(int i = 0; i < n; i++) {
            board[i] = s;
        }

        solve(n, ans, board, 0);

        return ans;
    }
};