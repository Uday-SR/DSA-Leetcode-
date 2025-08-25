class Solution {
public:
    string frequencySort(string s) {
        unordered_map <char, int> mpp;

        for(auto ch : s) {
            mpp[ch]++;
        }

        vector<pair<char, int>> temp(mpp.begin(), mpp.end());

        sort(temp.begin(), temp.end(), [](const auto a, const auto b) {
            return a.second > b.second;
        });

        string res;

        for(auto it : temp) {
            res += string(it.second, it.first);
        }

        return res;
    }
};