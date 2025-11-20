class Solution {
public:
    int longestPalindrome(string s) {
        int oddFreq = 0;

        unordered_map <char, int> mpp;

        for(char ch : s) {
            mpp[ch]++;

            if(mpp[ch] % 2 == 1) oddFreq++;
            else oddFreq--;
        }

        if(oddFreq > 1) return s.size()-oddFreq+1;

        return s.size();
    }
};