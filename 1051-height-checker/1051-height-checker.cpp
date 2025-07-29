class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector <int> sortedHeights = heights;

        sort(sortedHeights.begin(), sortedHeights.end());

        int cnt = 0;

        for(int i = 0; i < n; i++) {
            if(heights[i] != sortedHeights[i]) cnt++;
        }

        return cnt;
    }
};