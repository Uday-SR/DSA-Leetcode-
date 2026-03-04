class Solution {
public:
    int trap(vector<int>& height) {
        int i = 0;

        int n = height.size();
        int trap = 0;

        while(i < n) {
            if(height[i] <= 0) i++;
            else break;
        }

        while(i < n) {
            int sum = 0;
            int x = height[i];
            int idx = -1;
            int maxRight = 0;
            for(int j = i+1; j < n; j++) {
                if(height[j] >= x) {
                    idx = j;
                    break;
                }
                
                if(height[j] > maxRight) {
                    maxRight = height[j];
                    idx = j;
                }

                sum += x - height[j];
            }

            if(idx == -1) break;

            if(height[idx] < x) {
                sum = 0;
                for(int k = i+1; k < idx; k++) {
                    sum += maxRight - height[k];
                }
            }

            trap += sum;

            i = idx;
        }

        return trap;
    }
};