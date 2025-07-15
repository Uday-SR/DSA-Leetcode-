class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> result(rowIndex+1);
        vector <int> temp;

        int n = rowIndex+1;

        for(int i = 0; i < n; i++) {
            result[i].resize(i+1);
            result[i][0] = 1;
            result[i][i] = 1;
        }
        for(int i = 2; i < n; i++) {
            for(int j = 1; j < i; j++) {
                result[i][j] = result[i-1][j] + result[i-1][j-1];
            }
        }

        return result[rowIndex];
    }
};