class Solution {
public:
    string d2b(int n) {
        string res;

        while(n > 0) {
            if(n % 2 == 1) res += '1';
            else res += '0';
            n = n/2;
        }

        while(res.size() < 32) res += '0';
        reverse(res.begin(), res.end());
        
        return res;
    }

    int hammingWeight(int n) {
        string res = d2b(n);
        int count = 0;

        for(int i = 0; i < res.size(); i++) {
            if(res[i] == '1') count++;
        }

        return count;
    }
};