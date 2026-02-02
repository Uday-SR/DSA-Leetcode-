class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map <char, int> mpp;
        vector <char> temp;

        for(int i = 0; i < s.size(); i++) {
            mpp[s[i]]++;

            if(mpp[s[i]] == 2) {
                temp.push_back(s[i]);
                return s[i];
            }   
        }

        return temp[0];
    }
};