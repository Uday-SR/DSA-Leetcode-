class Solution {
public:
    bool binarySearch(vector<int>& matrix, int target) {
        int low = 0;
        int high = matrix.size()-1;

        while(low <= high) {
            int mid = (low+high)/2;

            if(matrix[mid] > target) high = mid - 1;
            else if(matrix[mid] < target) low = mid+1;
            else return true;
        }

        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i = 0; i < n; i++) {
            bool flag = binarySearch(matrix[i], target);
            if(flag) return true;
        }

        return false;
    }
};