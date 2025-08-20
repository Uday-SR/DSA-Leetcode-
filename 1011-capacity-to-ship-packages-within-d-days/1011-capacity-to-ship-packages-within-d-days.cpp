class Solution {
public:
    int countDays(vector<int>& weights, int maxSum) {
        int n = weights.size();
        int days = 1;
        int sum = 0;

        for(int i = 0; i < n; i++) {
            if(sum + weights[i] <= maxSum) {
                sum += weights[i];
            } else {
                days++;
                sum = weights[i];
            }
        }

        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while(low <= high) {
            int mid = (low+high)/2;
            int dayz = countDays(weights, mid);

            if(dayz > days) low = mid+1;
            if(dayz <= days) high = mid-1;
        }

        return low;
    }
};