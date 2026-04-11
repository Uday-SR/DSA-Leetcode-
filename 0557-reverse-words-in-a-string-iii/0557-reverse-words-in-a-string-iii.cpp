class Solution {
public:
    string reverseWords(string s) {
        string res;
        int i = 0;
        while(i < s.size()) {
            int j = i;
            string temp;
            while(j < s.size()) {
                if(s[j] == ' ') {
                    break;
                } else {
                    temp += s[j];
                    j++;
                }
            }

            reverse(temp.begin(), temp.end());
            res += temp;
            if(s[j] == ' ') res.push_back(' ');

            i = j+1;
        }

        return res;
    }
};