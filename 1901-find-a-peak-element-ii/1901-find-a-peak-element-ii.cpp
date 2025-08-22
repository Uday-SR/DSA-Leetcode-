class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        vector <int> index;
        vector <int> res;

        int big = 0;
        int big2 = 0;

        for(int i = 0; i < mat.size(); i++) {
            for(int j = 0; j < mat[0].size(); j++) {
                int check = big;
                big = max(big, mat[i][j]);
                if(check != big) {
                    index.push_back(i);
                    index.push_back(j);
                }
            }
        }

        res.push_back(index[index.size()-2]);
        res.push_back(index[index.size()-1]);

        return res;
    }
};