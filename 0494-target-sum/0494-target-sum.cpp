class Solution {
public:
    int ways(vector<int>& nums, int target, int index, int sum) {
        if(index == nums.size()) return (sum == target) ? 1 : 0;
        
        int add = ways(nums, target, index+1, sum+nums[index]);
        int sub = ways(nums, target, index+1, sum-nums[index]);

        return add+sub;
    }

    int findTargetSumWays(vector<int>& nums, int target) {

        return ways(nums, target, 0, 0);
        
    }
};