class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        long long n = num.size();
        long long val = 0;

        long long mul = 1;
        for(int i = n-1; i >= 0; i--) {
            val += num[i]*mul;
            mul *= 10;
        }

        long long preResult = val + k;

        vector <int> result;
        
        long long temp = preResult;

        if(preResult == 0) {
            result.push_back(0);
            return result;
        }
        
        while(temp) {
            int bef = temp%10;
            result.push_back(bef);
            temp = temp/10;
        }
        reverse(result.begin(), result.end());
        
        return result;

    }
};