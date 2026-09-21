class Solution {
public:
    int calculate(string s) {
        
        stack <int> st;

        long res = 0;
        long num = 0;
        int sign = 1;

        for(char ch : s) {
            if(isdigit(ch)) {

                num = num * 10 + (ch - '0');

            } else if(ch == '+') {

                res += sign * num;
                sign = 1;
                num = 0;

            } else if(ch == '-') {

                res += sign * num;
                sign = -1;
                num = 0;

            } else if(ch == '(') {

                st.push(res);
                st.push(sign);

                res = 0;
                sign = 1;

            } else if(ch == ')') {

                res += sign * num;
                num = 0;
                
                int prevSign = st.top();
                st.pop();

                int prevRes = st.top();
                st.pop();

                res = prevSign * res + prevRes;

            }
        }

        res += sign * num;

        return res;
    }
}; 