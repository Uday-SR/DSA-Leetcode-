class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector <string> res;

        if(nums.empty()) return res;

        int start = nums[0];

        for(int i = 1; i <= nums.size(); i++) {
            if(i < nums.size() && nums[i-1]+1 == nums[i]) {
                continue;
            } else {
                if(start != nums[i-1]) {
                    res.push_back(to_string(start)+"->"+to_string(nums[i-1]));
                } else {
                    res.push_back(to_string(start));
                }

                if(i < nums.size()) {
                    start = nums[i];
                }
            }
        }

        return res;

    }
};