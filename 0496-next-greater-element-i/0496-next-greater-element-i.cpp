class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector <int> res;

        for(int i = 0; i < nums1.size(); i++) {

            int greater = -1;

            int j = 0;

            while(j < nums2.size() && nums1[i] != nums2[j]) j++;

            j++;

            while(j < nums2.size() ) {

                if(nums2[j] > nums1[i]) {

                    greater = 1;
                    res.push_back(nums2[j]);
                    break;

                } j++;
            }

            if(greater == -1) res.push_back(-1);
            
        }

        return res;
    }
};