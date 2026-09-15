class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        priority_queue<int> q1;
        priority_queue<int> q2;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] % 2 == 0) q1.push(nums[i]);
            else q2.push(nums[i]);
        }

        vector<int> ans;

        for(int i = 0; i < nums.size(); i++) {
            if(i % 2 == 0) {

                ans.push_back(q1.top());
                q1.pop();

            } else {

                ans.push_back(q2.top());
                q2.pop();
            }
        }

        return ans;
    }
};