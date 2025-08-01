class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        vector <int> arr;

        for(int i = 0; i < numOnes; i++) {
            arr.push_back(1);
        }
        for(int i = 0;  i < numZeros; i++) {
            arr.push_back(0);
        }
        for(int i = 0; i < numNegOnes; i++) {
            arr.push_back(-1);
        }
        
        int sum = 0;

        for(int  i = 0; i < k; i++) {
            sum += arr[i];
        }

        return sum;
    }
};