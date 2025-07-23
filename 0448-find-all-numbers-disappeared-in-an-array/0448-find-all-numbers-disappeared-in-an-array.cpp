class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector <int> visited(n, 0);
        vector <int> ans;

        for(int i = 0; i < n; i++) {
            visited[nums[i]-1] = 1;
        }

        for(int i = 0; i < n; i++) {
            if(visited[i] == 0) ans.push_back(i+1);
        }

        return ans;
    }
};