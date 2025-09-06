class Solution {
public:

    double myPow(double x, int n) {
        double res = 1;
        long long power = n;

        if(power < 0) {
            x = 1/x;
            power = -power;
        }

        while(power > 0) {
            if(power % 2 == 0) {
                x *= x;
                power /= 2;
            } else {
                res *= x;
                power--;
            }
        }

        return res;
    }
};