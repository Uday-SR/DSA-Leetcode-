class Solution {
public:
    int distributeCandies(vector<int>& candyType) {

        sort(candyType.begin(), candyType.end());
        int n = candyType.size();

        if(candyType.empty()) return 0;

        int capacity = n/2;
        int types = 1;

        for(int i = 1; i < n; i++) {
            if(candyType[i] == candyType[i-1]) continue;
            types++;
        }

        return min(capacity, types);
    }
};