class Solution {
public:
    bool power(int n, long long t) {
        if(t > n) return false;
        if(t == n) return true;

        return power(n, t*3);
    }
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;
        
        return power(n, 1);
    }
};