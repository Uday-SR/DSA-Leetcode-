class Solution {
public:

    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int windowSum = 0;

        for(int i = 0; i < k; i++) {
            windowSum += nums[i];
        }

        int maxSum = windowSum;

        for(int i = k; i < n; i++) {

            windowSum += nums[i] - nums[i-k];
            maxSum = max(windowSum, maxSum);
        }

        double Avg = (double)maxSum / k;

        return Avg;
    }
};