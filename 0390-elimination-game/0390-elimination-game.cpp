class Solution {
public:
    int helper(int n, bool left) {
        if(n == 1) return 1;

        if(left || n%2 == 1) {
            return 2*helper(n/2, !left);
        } else {
            return 2*helper(n/2, !left)-1;
        }
    }

    int lastRemaining(int n) {
        return helper(n, true);
    }
};