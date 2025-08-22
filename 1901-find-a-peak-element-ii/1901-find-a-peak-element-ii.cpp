class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int start = 0, end = mat[0].size();

        while(start <= end) {
            int mid = start + (end-start)/2;
            int maxRow = 0;

            for(int i = 0; i < mat.size(); i++) {
                if(mat[i][mid] > mat[maxRow][mid]) {
                    maxRow = i;
                }
            }

            bool isLeftbig = (mid > 0 && mat[maxRow][mid-1] > mat[maxRow][mid]);
            bool isRightbig = (mid < mat[0].size()-1 && mat[maxRow][mid+1] > mat[maxRow][mid]);

            if(!isLeftbig && !isRightbig) {
                return {maxRow, mid};
            } else if(isRightbig) {
                start = mid+1;
            } else {
                end = mid-1;
            }
        }

        return {-1, -1};
    }
};