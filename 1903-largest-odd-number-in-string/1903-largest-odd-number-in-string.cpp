class Solution {
public:
    string largestOddNumber(string num) {
        int index = -1;
        for(int i = num.size()-1; i >= 0; i--) {
            if(num[i]%2 != 0) {
                index = i;
                break;
            }
        }
        string res;

        if(index == -1) return res;

        for(int i = 0; i <= index; i++) {
            res += num[i];
        }

        return res;
    }
};