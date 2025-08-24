class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        
        string merge = s + s;

        if(merge.find(goal) != -1) return true;
        
        return false;
    }
};