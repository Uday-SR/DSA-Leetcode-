class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {

        int n = nums.size();

        if(n == 0) return -1;
        if(n == 1) return  (k % 2 == 0) ? nums[0] : -1;
        if(k == 0) return nums[0];

        int i = 0;

        int top = 0;
        
        while(i < k-1 && i < nums.size()) {

            top = max(top, nums[i]);

            i++;
        }

        if(k < n) top = max(top, nums[k]);

        return top;
    }
};