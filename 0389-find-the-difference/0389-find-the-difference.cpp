class Solution {
public:
    char findTheDifference(string s, string t) {
        
        for(int i = 0; i < t.size(); i++) {
            size_t pos = s.find(t[i]);
            if(pos != string::npos) s.erase(pos, 1);
            else return t[i];
        }

        return ' ';

    }
};