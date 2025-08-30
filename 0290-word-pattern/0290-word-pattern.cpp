class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector <string> split;
        unordered_map <char, string> mpp;
        unordered_map <string, char> rev;

        string temp;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ' ' && !temp.empty()) {
                split.push_back(temp);
                temp.clear();
            } else {
                temp += s[i];
            }
        }

        if(!temp.empty()) split.push_back(temp);

        if(pattern.size() != split.size()) return false;

        for(int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string w = split[i];

            if(mpp.count(c) == 0 && rev.count(w) == 0) {
                mpp[c] = w; 
                rev[w] = c;
            }
            if(mpp[c] != w || rev[w] != c) return false;
        }

        return true;
    }
};