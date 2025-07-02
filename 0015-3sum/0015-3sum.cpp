class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector <vector<int>> result;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0;

        for(int i = 0; i < n-2; i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;

            int j = i+1;
            int k = n-1;

            while(k > j) {
                int sum = nums[i]+nums[j]+nums[k];

                if(sum != 0) {
                    if(sum > 0) k--;
                    if(sum < 0) j++;
                }
                else {
                    result.push_back({nums[i], nums[j], nums[k]});
                    j++;

                    while(nums[j] == nums[j-1] && j < k) j++;
                }
            }
        }

        return result;
    }
};