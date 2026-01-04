class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int max = -1;
        int result = -1;

        for(int i = 0; i < nums.size(); i++) {
            int count = 0;
            for(int j = 0; j < nums.size(); j++) {
                if(nums[j] == nums[i]) count++;
            }
            if(count > max) {
                result = nums[i];
                max = count;
            }
        }

        return result;
    }
};