class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map <int, int> mpp;

        for(auto it : nums) {
            mpp[it]++;
        }

        for(int i = 0; i < nums.size(); i++) {
            if(mpp[nums[i]] >= 2) return nums[i];
        }

        return 0;
    }
};