class Solution {
public:
    int reverse(int x) {
        long long temp = x;
        long long result = 0;

        if(temp < 0) {
            temp *= (-1);
        }

        while(temp > 0) {
            int rem = temp%10;
            temp = temp/10;
            result = result*10 + rem;
        }
        
        if(result < INT_MIN || result > INT_MAX) return 0;

        if(x < 0) return result*(-1);

        return result;
    }
};