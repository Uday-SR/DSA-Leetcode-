class Solution {
public:
    void findSubset(vector<int>& candidates, vector<vector<int>> &res, int target, int index, vector <int> &temp) {
        if(target == 0) {
            res.push_back(temp);
            return;
        }

        if(target < 0) {
            return;
        }

        for(int i = index; i < candidates.size(); i++) {
            temp.push_back(candidates[i]);
            findSubset(candidates, res, target-candidates[i], i, temp);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;

        findSubset(candidates, res, target , 0, temp);
        

        return res;
    }
};