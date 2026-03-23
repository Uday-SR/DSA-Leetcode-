class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector <string> res;
        gp(0, 0, "", res, n);

        return res;
    }

    void gp(int open, int closed, string s, vector <string>& res, int n) {
        if(open == closed && open + closed == n*2) {
            res.push_back(s);
            return;
        }

        if(open < n) gp(open + 1, closed, s + "(", res, n);
        if(closed < open) gp(open, closed + 1, s + ")", res, n);
    }
};