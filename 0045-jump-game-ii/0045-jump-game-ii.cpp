class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int sum = 0, cnt = 0, end = 0;

        for(int i = 0; i < n-1; i++) {
            sum = max(sum, i + nums[i]);
            if(i == end) {
                cnt++;
                end = sum;
            }
        }

        return cnt;
    }
};