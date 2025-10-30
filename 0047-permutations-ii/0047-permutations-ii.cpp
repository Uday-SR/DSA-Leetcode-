class Solution {
public:
    void permute(vector<int>& nums, int n, vector <vector <int>>& res, vector<int>& freq, vector<int>& temp) {
        if(temp.size() == n) {
            res.push_back(temp);
            return;
        }

        for(int i = 0; i < n; i++) {
            if(i > 0 && nums[i] == nums[i-1] && !freq[i-1]) continue;
            if(!freq[i]) {
                temp.push_back(nums[i]);
                freq[i] = 1;
                permute(nums, n, res, freq, temp);
                temp.pop_back();
                freq[i] = 0;
            }
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();

        vector <vector <int>> res;
        vector <int> freq(n, 0);
        vector <int> temp;
        set <vector <int>> real;

        sort(nums.begin(), nums.end());

        permute(nums, n, res, freq, temp);

        return res;
    }
};