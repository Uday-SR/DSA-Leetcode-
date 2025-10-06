class Solution {
public:

    string d2b(int num) {
        string res;

        while(num > 0) {
            if(num % 2 == 1) res += '1';
            else res += '0';
            num /= 2;
        }

        reverse(res.begin(), res.end());

        return res;
    }

    int b2d(string res) {
        unsigned int p2 = 1, num = 0;

        for(int i = res.size()-1; i >= 0; i--) {
            if(res[i] == '1') {
                num += p2;
            }
            p2 *= 2;
        }

        return num;
    }

    string comp(string res) {
        string comp;

        for(int i = res.size()-1; i >= 0; i--) {
            if(res[i] == '1') {

                comp += '1';

                for(int j = i-1; j >= 0; j--) {
                    if(res[j] == '1') comp += '0';
                    else comp += '1';
                }

                break;

            } else {
                comp += '0';
            }
        }

        reverse(comp.begin(), comp.end());

        return comp;
    }

    int findComplement(int num) {
        string bin = d2b(num);
        string res = comp(bin);

        return b2d(res)-1;
    }
};