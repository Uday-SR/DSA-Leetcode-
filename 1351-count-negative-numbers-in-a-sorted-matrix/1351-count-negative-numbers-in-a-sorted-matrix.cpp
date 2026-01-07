class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid[0].size();
        int n = grid.size();
        int count = 0;

        for(int i = 0; i < m; i++) {
            for(int j = n-1; j >= 0; j--) {
                if(grid[j][i] >= 0) break;
                count++;
            }
        }

        return count;
    }
};