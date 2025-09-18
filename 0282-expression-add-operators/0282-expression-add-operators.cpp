class Solution {
public:
    void findString(string num, int target, vector<string> &res, string str, int index, long val, long prev) {
        

        if(index == num.size()) {
            if(val == target) {
                res.push_back(str);
            }
            return;
        }

        for(int i = index; i < num.size(); i++) {
            if(i != index && num[index] == '0') break;

            string curStr = num.substr(index, i-index+1);
            long cur = stol(curStr);

            if(index == 0) {

                findString(num, target, res, curStr, i+1, cur, cur);

            } else {

                findString(num, target, res, str+'+'+curStr, i+1, val+cur, cur);
                findString(num, target, res, str+'-'+curStr, i+1, val-cur, -cur);
                findString(num, target, res, str+'*'+curStr, i+1, val-prev+prev*cur, prev*cur);

            }    
        }
    }

    vector<string> addOperators(string num, int target) {
        vector<string> res;
        string str;

        findString(num, target, res, str, 0, 0, 0);

        return res;
    }
};