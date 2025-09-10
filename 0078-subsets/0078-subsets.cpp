class Solution {
public:
    void findSubsets(vector<int> &nums, vector<vector<int>> & res, vector<int> &temp, int n, int index) {
        if(index == n) return;

        for(int i = index; i < n; i++) {
            temp.push_back(nums[i]);
            res.push_back(temp);
            
            findSubsets(nums, res, temp, n, i+1);

            temp.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;

        int n = nums.size();
        res.push_back(temp);

        findSubsets(nums, res, temp, n, 0);
        
        return res;
    }
};