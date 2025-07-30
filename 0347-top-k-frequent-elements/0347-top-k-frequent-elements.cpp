class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        map <int, int> mpp;
        vector <int> result;

        mpp.insert({nums[0], 1});
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1]) {
                mpp[nums[i]]++;
            } else {
                mpp.insert({nums[i], 1});
            }
        }
        
        for(int i = 0; i < k; i++) {
            int maxKey = -1;
            int maxVal = INT_MIN;
            for(auto it : mpp) {
                if(it.second > maxVal) {
                    maxVal = it.second;
                    maxKey = it.first;
                }
            }
            result.push_back(maxKey);
            mpp.erase(maxKey);
        }

        return result;
    }
};