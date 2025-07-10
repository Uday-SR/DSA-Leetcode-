class Solution {
public:
    long long nCr(int n, int r) {
        if(r == 0 || r == n) return 1;
        long long res = 1;
        for(int i = 1; i <= r; i++) {
            res = res * (n-i+1)/i;
        }
        return res;
    }

    int climbStairs(int n) {
        
        int count = 0;

        for(int i = 0; i <= n/2; i++) {
            int temp = n-(i*2);
            int totalSteps = temp + i;
            count += nCr(totalSteps, i);
        }

        return count;
    }
};