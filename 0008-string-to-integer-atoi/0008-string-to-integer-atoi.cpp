class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i = 0;
        int sign = 1;

        while(i < n && s[i] == ' ') i++;

        if(i < n && (s[i] == '-' || s[i] == '+')) {
            if(s[i] == '-') sign = -1;
            i++;  
        }

        long long result = 0;

        while(i < n && isdigit(s[i])) {
            result = result*10 + (s[i] - '0');
            i++;
        }

        return (int)result*sign;
    }
};