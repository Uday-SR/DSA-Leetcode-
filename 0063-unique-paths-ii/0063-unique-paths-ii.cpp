class Solution {
public:
    int dp[101][101];
    int paths(vector<vector<int>>& obstacleGrid, int i, int j) {
        if(i >= obstacleGrid.size() || j >= obstacleGrid[0].size()) return 0;
        if(i == obstacleGrid.size()-1 && j == obstacleGrid[0].size()-1) return 1;
        if(obstacleGrid[i][j] == 1) return 0;
        if(dp[i][j]) return dp[i][j];

        return dp[i][j] = paths(obstacleGrid, i+1, j) + paths(obstacleGrid, i, j+1);
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        if(obstacleGrid[m-1][n-1] == 1) return 0;

        return paths(obstacleGrid, 0, 0);
    }
};