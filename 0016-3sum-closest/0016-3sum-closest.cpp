class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int check = 1e9;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int result = 0;

        for(int i = 0; i < n-2; i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;

            int j = i+1;
            int k = n-1;

            while(k > j) {
                int sum = nums[i] + nums[j] + nums[k];

                if(sum == target) return sum;

                int diff = abs(sum - target);

                if(diff < check) {
                    result = sum;
                    check = diff;
                }

                if(sum > target) k--;
                else j++;
            }
        }

        return result;
    }
};