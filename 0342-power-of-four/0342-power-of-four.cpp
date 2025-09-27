class Solution {
public:
    bool power(int n, long long f) {
        if(f > n) return false;
        if(f == n) return true;

        return power(n, f*4);;
    }

    bool isPowerOfFour(int n) {
        if(n <= 0) return false;
        return power(n, 1);
    }
};