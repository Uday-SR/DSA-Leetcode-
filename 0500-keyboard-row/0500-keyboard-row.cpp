class Solution {
public:
    vector<string> findWords(vector<string>& words) {

        vector<string> ans;

        string first = "qwertyuiop";
        string second  = "asdfghjkl";
        string third = "zxcvbnm";

        for(int i = 0; i < words.size(); i++) {
            string lower = words[i];
            for(int j = 0 ; j < lower.size(); j++) {
                lower[j] = tolower(lower[j]);
            }
            string row;

            if(first.find(lower[0]) != string::npos) row = first;
            else if(second.find(lower[0]) != string::npos) row = second;
            else row = third;

            bool exist = true;
            for(int j = 0; j < lower.size(); j++) {
                if(row.find(lower[j]) == string::npos) {
                    exist = false;
                    break;
                }
            }

            if(exist) ans.push_back(words[i]);
        }

        return ans;
    }
};