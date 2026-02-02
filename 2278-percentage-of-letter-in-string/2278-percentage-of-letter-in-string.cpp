class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n = s.size();
        int count = 0;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == letter) count++;
        }

        int result = (int)((double)count / n * 100);

        return result;
    }
};