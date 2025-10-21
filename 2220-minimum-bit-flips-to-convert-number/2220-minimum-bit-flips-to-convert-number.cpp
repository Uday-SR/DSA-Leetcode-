class Solution {
public:
    string toBinary(int x) {
        string ans;

        while(x > 0) {
            ans += to_string(x%2);
            x /= 2;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }

    int minBitFlips(int start, int goal) {

        string s = toBinary(start);
        string g = toBinary(goal);

        if(s.size() != g.size()) {

            if(s.size() > g.size()) {

                int diff = s.size() - g.size();
                string zeros(diff, '0');
                g.insert(0, zeros);

            } else {

                int diff = g.size() - s.size();
                string zeros(diff, '0');
                s.insert(0, zeros);

            }

        }

        int count = 0;

        for(int i = 0; i < g.size(); i++) {
            if(g[i] != s[i]) count++;
        }

        return count;
    }
};