class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector <vector<int>> result;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for(int i = 0; i < n-3; i++) {
            for(int j = i+1; j < n-2; j++) {
                if(i > 0 && nums[i] == nums[i-1]) continue;
                if(j > i+1 && nums[j] == nums[j-1]) continue;
                int k = j+1;
                int l = n-1;

                while(k < l) {
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if(sum != target) {
                        if(sum > target) l--;
                        if(sum < target) k++;
                    }
                    else {
                        result.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++;

                        while(nums[k-1] == nums[k] && l > k) k++;
                    }
                }
            }
        }

        return result;
    }
};