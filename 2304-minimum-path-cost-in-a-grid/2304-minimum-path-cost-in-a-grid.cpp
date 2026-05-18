class Solution {
public:
    int dp[201][201];
    int helper(vector<vector<int>>& grid, vector<vector<int>>& moveCost, int i, int j) {
        if(i == grid.size()-1) return grid[i][j];

        if(dp[i][j]) return dp[i][j];

        int temp = INT_MAX;

        for(int k = 0; k < grid[0].size(); k++) {
            temp = min(temp, grid[i][j]+moveCost[grid[i][j]][k]+helper(grid, moveCost, i+1, k));
        }

        return dp[i][j] = temp;
    }

    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
        int res = INT_MAX;
        for(int i = 0; i < grid[0].size(); i++) {
            res = min(res, helper(grid, moveCost, 0, i));
        }

        return res;
    }
};