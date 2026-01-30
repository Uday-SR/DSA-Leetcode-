class Solution {
public:
    bool isPerfectSquare(int num) {
        if( num == 1 ) return 1;

        int low = 1;
        int high = num;
        int mid = -1;

        while(low <= high) {
            mid = low + (high - low)/2;

            if((long) mid*mid < (long) num) low = mid + 1;
            else if((long) mid*mid == (long) num) return true;
            else high = mid - 1;
        }

        return false;
    }
};