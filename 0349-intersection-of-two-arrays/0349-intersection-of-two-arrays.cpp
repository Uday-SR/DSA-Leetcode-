class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set <int> temp;
        set <int> st(nums1.begin(), nums1.end());

        for(int i = 0; i < nums2.size(); i++) {
            if(st.count(nums2[i])){
                temp.insert(nums2[i]);
            }
        }

        vector <int> result(temp.begin(), temp.end());

        return result;
    }
};