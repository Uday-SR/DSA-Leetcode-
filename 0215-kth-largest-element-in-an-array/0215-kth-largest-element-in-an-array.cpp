class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int result = 0;
        int cnt = 0;
        
        for(int i = nums.size()-1; i >= 0; i--) {
            cnt++;
            if(cnt == k) {
                result = nums[i];
                break;
            }
        }

        return result;
    }
};