class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.size();
        if(n % 2 != 0) return false;

        int low = 0, high = 0;

        for(int i = 0; i < n; i++) {
            if(locked[i] == '1') {
                if(s[i] == '(') {
                    low++, high++;
                } else {
                    low--, high--;
                }
            } else {
                high++;
                low--;
            }

            if(high < 0) return false;
            if(low < 0) low = 0;
        }

        return low == 0;

    }
};