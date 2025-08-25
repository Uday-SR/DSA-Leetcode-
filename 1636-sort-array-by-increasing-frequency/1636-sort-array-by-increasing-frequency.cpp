class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map <int, int> mpp;

        for(auto it : nums) {
            mpp[it]++;
        }

        vector<pair<int, int>> temp(mpp.begin(), mpp.end());

        sort(temp.begin(), temp.end(), [](const auto a, const auto b) {
            if(a.second == b.second) {
                return a.first > b.first;
            }
            return a.second < b.second;
        });

        vector <int> res;

        for(auto it : temp) {
            for(int i = 0; i < it.second; i++) {
                res.push_back(it.first);
            }
        }

        return res;
    }
};