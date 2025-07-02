class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxProduct = INT_MIN;
        int product = 1;

        for(int i = 0; i < n; i++) {
            product *= nums[i];
            maxProduct = max(maxProduct, product);

            if(product == 0) product = 1;
            if(product < 0) {
                product = 1;
                continue;
            }
        }
        product = 1;

        return maxProduct;
    }
};