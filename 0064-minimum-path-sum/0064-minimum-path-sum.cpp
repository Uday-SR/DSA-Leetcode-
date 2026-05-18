class Solution {
public:
    int dp[201][201];
    int helper(vector<vector<int>>& grid, int i, int j) {
        if(i >= grid.size() || j >= grid[0].size()) return INT_MAX;
        if(i == grid.size()-1 && j == grid[0].size()-1) return grid[i][j];

        if(dp[i][j]) return dp[i][j];

        int down = helper(grid, i, j+1);
        int right = helper(grid, i+1, j);

        return dp[i][j] = grid[i][j] + min(down, right);
    }

    int minPathSum(vector<vector<int>>& grid) {
        return helper(grid, 0, 0);
    }
};