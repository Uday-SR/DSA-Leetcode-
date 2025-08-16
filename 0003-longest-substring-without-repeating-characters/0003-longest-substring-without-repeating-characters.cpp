class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0) return 0;
        
        int res = 1;
        int start = 0;

        for(int i = 1; i < s.size(); i++) {
            for(int j = start; j < i; j++) {
                if(s[i] == s[j]) {
                    start = j+1;
                    break;
                }
            }
            res = max(res, i-start+1);
        }

        return res;
    }
};