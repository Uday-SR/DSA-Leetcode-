class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        for(int i = 0; i < s.size(); i += 2*k) {
            int j = min(i+k, n);

            reverse(s.begin()+i, s.begin()+j);
        }

        return s;
    }
};