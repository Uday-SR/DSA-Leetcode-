class Solution {
public:
    int maxDepth(string s) {

        int maxDepth = 0, depth = 0;
        
        for(auto it : s) {
            if(it == '(') {
                depth++;
                maxDepth = max(maxDepth, depth);
            }
            if(it == ')') {
                depth--;
            }
        }

        return maxDepth;
    }
};