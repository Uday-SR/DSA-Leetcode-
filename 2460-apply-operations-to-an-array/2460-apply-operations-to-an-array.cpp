class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector <int> temp;
        if(nums.empty()) return nums;

        int n = nums.size();
        if(n == 1) return nums;

        int zeros = 0;
        for(int i = 0; i < n-1; i++) {
            if(nums[i] == nums[i+1]) {
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) zeros++;
            else temp.push_back(nums[i]);
        }
        for(int i = 0; i < zeros; i++) {
            temp.push_back(0);
        }

        return temp;
    }
};