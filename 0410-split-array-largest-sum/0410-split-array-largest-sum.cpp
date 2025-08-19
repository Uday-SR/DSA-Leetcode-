class Solution {
public:
    int countPartitions(vector<int>& nums, int maxSum) {
        int n = nums.size();
        int partition = 1;
        int subarraySum = 0;

        for(int i = 0; i < n; i++) {
            if(subarraySum + nums[i] <= maxSum) {
                subarraySum += nums[i];
            } else {
                partition++;
                subarraySum = nums[i];
            }
        }

        return partition;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while(low <= high) {
            int mid = (low+high)/2;
            int partitions = countPartitions(nums, mid);

            if(partitions > k) low = mid+1;
            if(partitions <= k) high = mid-1;
        }

        return low;
    }
};