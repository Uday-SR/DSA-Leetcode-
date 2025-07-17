class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector <int> result;
        vector <int> visited(nums2.size(), 0);

        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {
                if(nums1[i] == nums2[j] && visited[j] == 0) {
                    result.push_back(nums1[i]);
                    visited[j] = 1;
                    break;
                }
            }
        }

        return result;
    }
};