class Solution {
public:
    void findComb(string digits, vector <string> &res,  unordered_map<char, string> &mpp, string str, int index) {
        if(index == digits.size()) {
            res.push_back(str);
            return;
        }

        string letters = mpp.at(digits[index]);

        for(char letter : letters) {
            findComb(digits, res, mpp, str+letter, index+1);
        }
    }

    vector<string> letterCombinations(string digits) {
        vector <string> res;

        if(digits.size() == 0) return res;

        unordered_map<char, string> mpp = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"},
        };

        findComb(digits, res, mpp, "", 0);

        return res;
    }
};