class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> mpp;

        if(s.size() != t.size()) return false;

        for(char ch : s) {
            mpp[ch]++;
        }

        for(char ch : t) {
            if(mpp[ch] > 0) {
                mpp[ch]--;
                continue;
            }
            else return false;
        }

        return true;
    }
};