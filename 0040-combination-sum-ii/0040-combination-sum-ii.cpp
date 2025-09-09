class Solution {
public:
    void findSum(vector<int> &candidates, vector<vector<int>> &res, vector<int> &temp, int target, int index) {
        if(target == 0) {
            res.push_back(temp);
            return;
        }

        for(int i = index; i < candidates.size(); i++) {

            if(i > index && candidates[i] == candidates[i-1]) continue;
            if(candidates[i] > target) break;

            temp.push_back(candidates[i]);
            findSum(candidates, res, temp, target-candidates[i], i+1);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector <int> temp;

        sort(candidates.begin(), candidates.end());

        findSum(candidates, res, temp, target, 0);

        return res;
    }
};