class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set <int> st(nums.begin(), nums.end());

        int n = st.size();

        if(n < 3) return *st.rbegin();

        auto last = st.rbegin();
        int res;
        int i = 0;
        while(i < 3) {
            res = *last;
            i++;
            last++;
        }

        return res;
    }
};