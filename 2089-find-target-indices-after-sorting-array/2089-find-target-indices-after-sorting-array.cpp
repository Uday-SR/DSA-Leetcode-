class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector <int> temp = nums;
        vector <int> ans;

        sort(temp.begin(), temp.end());

        for(int i = 0; i < nums.size(); i++) {
            if(temp[i] == target) {
                int j = i;
                while(temp[j] == target) {
                    ans.push_back(j);
                    if(j == temp.size()-1) break;
                    j++;
                }
                break;
            }
        }

        return ans;
    }
};