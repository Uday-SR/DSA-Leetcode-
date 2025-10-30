class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector <string> temp = strs;
        vector <vector <string>> res;
        vector <int> visited(strs.size(), 0);

        for(int i = 0; i < strs.size(); i++) {
            sort(strs[i].begin(), strs[i].end());
        }

        for(int i = 0; i < strs.size(); i++) {
            if(visited[i]) continue;

            vector <string> str;
            str.push_back(temp[i]);
            visited[i] = 1;
            
            for(int j = i+1; j < strs.size(); j++) {
                if(!visited[j] && strs[i] == strs[j]) {
                    str.push_back(temp[j]);
                    visited[j] = 1;
                }
            }

            res.push_back(str);
        }

        return res;
    }
};