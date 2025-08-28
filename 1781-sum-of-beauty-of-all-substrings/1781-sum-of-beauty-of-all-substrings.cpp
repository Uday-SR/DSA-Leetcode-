class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int count = 0;

        for(int i = 0; i < n; i++) {
            unordered_map <char, int> mpp;

            for(int j = i; j < n; j++) {
                mpp[s[j]]++;

                int maxi = INT_MIN;
                int mini = INT_MAX;

                for(auto it : mpp) {
                    maxi = max(maxi, it.second);
                    mini = min(mini, it.second);
                }

                if(maxi-mini > 0) count += maxi-mini;
            }
        }

        return count;
    }
};