class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> sorted;
        sorted.reserve(nums1.size()+nums2.size());
        sorted.insert(sorted.end(), nums1.begin(), nums1.end());
        sorted.insert(sorted.end(), nums2.begin(), nums2.end());

        sort(sorted.begin(), sorted.end());

        int n = sorted.size();

        if(n % 2 == 0) {
            return static_cast<double>(sorted[n/2-1]+sorted[n/2])/2;
        } else {
            return sorted[n/2];
        }

        return 0;
    }
};