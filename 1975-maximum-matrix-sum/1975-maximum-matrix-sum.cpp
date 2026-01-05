class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        vector <int> neg;
        long long sum = 0;
        int minAbs = INT_MAX;

        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++) {
                if(matrix[i][j] < 0) {
                    neg.push_back(matrix[i][j]);
                }
                sum += abs(matrix[i][j]);
                minAbs = min(minAbs, abs(matrix[i][j]));
            }
        }

        if(neg.size() % 2 == 1) {
            sum -= 2 * minAbs;
        } 

        return sum;
    }
};