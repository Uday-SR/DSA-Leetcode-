class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;

        while(columnNumber > 0) {
            columnNumber--;
            int num = columnNumber%26;
            res = char(num+'A') + res;
            columnNumber /= 26;
        }

        return res;
    }
};