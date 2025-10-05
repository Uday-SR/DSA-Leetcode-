class Solution {
public:
    string d2b(int x) {
        string res;

        while(x > 0) {
            if(x%2 == 1) res += '1';
            else res += '0';
            x = x/2;
        }

        while(res.size() < 32) res += '0';
        reverse(res.begin(), res.end());

        return res;
    }

    int b2d(string x) {
        int size = x.size();
        unsigned int p2 = 1, num = 0;

        for(int i = size-1; i >= 0; i--) {
            if(x[i] == '1') {
                num = num + p2;
            }

            p2 = p2*2;
        }

        return num;
    }

    int reverseBits(int n) {
        string res = d2b(n);
        reverse(res.begin(), res.end());
        return b2d(res);
    }
};