class Solution {
public:
    bool isHappy(int n) {
        unordered_set <int> st;

        while(n != 1 && st.find(n) == st.end()) {
            st.insert(n);

            int temp = n;
            int sum = 0;

            while(temp > 0) {
                int rem = temp % 10;
                sum += rem*rem;
                temp = temp/10;
            }

            n = sum;
        }

        return n==1;
    }
};