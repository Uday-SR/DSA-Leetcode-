class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int n = nums.size();
        int maxm = -1;

        for(int i = 0; i < n; i++) {
            bool valid = true;
            for(int j = 0; j < n; j++) {
                if(i == j) continue;

                if(2*nums[j] > nums[i]) {
                    valid = false;
                    break;
                }
            }

            if(valid) {
                maxm = i;
                break;
            }
        }

        return maxm;
    }
};