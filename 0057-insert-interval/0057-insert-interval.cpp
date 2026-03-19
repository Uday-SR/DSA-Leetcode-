class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        
        int n = intervals.size();
        int i = 0;
        int first = newInterval[0], second = newInterval[1];
        
        while(i < n && newInterval[0] > intervals[i][1]) {
            res.push_back(intervals[i]);
            i++;
        }

        while(i < n && intervals[i][0] <= second) {
            first = min(first, intervals[i][0]);
            second = max(second, intervals[i][1]);
            i++;
        }

        res.push_back({first, second});

        while(i < n) {
            res.push_back(intervals[i]);
            i++;
        }

        return res;
    }
};