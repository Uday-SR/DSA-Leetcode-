class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) { 
        int row = grid.size();
        int col = grid[0].size();
        int perimeter = 0;

        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(grid[i][j] == 1) {
                    int length = 4;

                    if(j > 0 && grid[i][j-1] == 1) length--;
                    if(i > 0 && grid[i-1][j] == 1) length--;
                    if(j < col-1 && grid[i][j+1] == 1) length--;
                    if(i < row-1 && grid[i+1][j] == 1) length--;

                    perimeter += length;
                }
            }
            
        }

        return perimeter;
    }
};