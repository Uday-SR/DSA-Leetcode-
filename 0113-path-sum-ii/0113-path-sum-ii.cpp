/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        stack <pair<TreeNode*, vector<int>>> st;
        stack <int> sum;
        vector <vector <int>> result;

        if (!root) return {};

        st.push({root, {root->val}});
        sum.push(root->val);

        while(!st.empty()) {
            auto [node, currentPath] = st.top(); st.pop();
            int currentSum = sum.top(); sum.pop();

            if(!node->left && !node->right && currentSum == targetSum) {
                result.push_back(currentPath);
            }

            if(node->right) {
                vector <int> newPath = currentPath;
                newPath.push_back(node->right->val);
                st.push({node->right, newPath});
                sum.push(currentSum + node->right->val);
            }
            if(node->left) {
                vector <int> newPath = currentPath;
                newPath.push_back(node->left->val);
                st.push({node->left, newPath});
                sum.push(currentSum + node->left->val);
            }
        }
        
        return result;
    }
};