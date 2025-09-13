class Solution {
public:
    bool isPalind(string &s) {
        string x;
        for(int i = s.size()-1; i >= 0; i--) {
            x += s[i];
        }
        
        if(x == s) {
            return true;
        }

        return false;
    }

    void findSub(string &s, vector<vector<string>> &res, vector<string> temp, int index) {
        if(index == s.size()) {
            res.push_back(temp);
            return;
        }

        for(int i = index; i < s.size(); i++) {
            string str = s.substr(index, i-index+1);

            if(isPalind(str)) {
                temp.push_back(str);
                findSub(s, res, temp, i+1);
                temp.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> temp;

        findSub(s, res, temp, 0);

        return res;
    }
};