class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount == 0) return 0;
        if(amount < 0) return -1;

        int min_count = INT_MAX;

        for(int coin : coins) {
            int res = coinChange(coins, amount-coin);
            if(res >= 0 && res < min_count) {
                min_count = 1+res;
            }
        }

        return (min_count == INT_MAX) ? -1 : min_count;

    }
};