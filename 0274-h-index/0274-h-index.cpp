class Solution {
public:
    int hIndex(vector<int>& citations) {

        sort(citations.rbegin(), citations.rend());

        int h = 1;

        while(h <= citations[0]) {
            int cnt = 0;
            for(int i = 0; i < citations.size(); i++) {
                if(citations[i] < h) break;
                else cnt++;
            }
            if(cnt < h) break;
            h++;
        }

        return h-1;    
    }
};