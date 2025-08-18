class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector <int> res;

        int j = 1;
        for(int i = 0; i < arr.size(); i++) {
            while(j < arr[i]) {
                res.push_back(j);
                j++;
            }
            j = arr[i]+1;
        } 

        int n = res.size();

        if(k > n) {
            res.push_back(arr[arr.size()-1]+1);
            int diff = k-(n+1);
            return res[n]+diff;
        }

        return res[k-1];
    }
};