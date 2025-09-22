class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map <char, int> mapT, mapS;

        for(int i = 0; i < s.size(); i++) {
            if(mapT[t[i]] != mapS[s[i]]) return false;
            mapT[t[i]] = i+1;
            mapS[s[i]] = i+1;
        }

        return true;
    }
};