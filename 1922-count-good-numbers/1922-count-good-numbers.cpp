class Solution {
public:
    long long helper(long long base, long long expo, long long MOD) {
        long long res = 1;

        while(expo > 0) {
            if(expo % 2 == 0) {
                base = (base * base) % MOD;
                expo = expo/2;
            } else {
                res =(res * base) % MOD;
                expo--;
            }
        }

        return res;
    }
    int countGoodNumbers(long long n) {
        long long even = (n+1)/2;
        long long odd = n/2;
        long long MOD = 1e9+7;

        long long res = ((helper(5, even, MOD) * helper(4, odd, MOD)) % MOD);

        return (int) res;
    }
};