class Solution {
public:
    void findSubset(vector<vector<int>> &res, vector<int> &temp, int k, int n, int index) {
        if(temp.size() == k && n == 0) {
            res.push_back(temp);
            return;
        }

        if(n < 0) {
            return;
        }

        for(int i = index; i <= 9; i++) {
            temp.push_back(i);
            findSubset(res, temp, k, n-i, i+1);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> temp;

        // if(k < n) return res;

        findSubset(res, temp, k, n, 1);

        return res;
    }
};