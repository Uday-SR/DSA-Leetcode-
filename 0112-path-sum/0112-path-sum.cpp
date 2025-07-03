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
    bool hasPathSum(TreeNode* root, int targetSum) {
        stack <TreeNode*> st;
        int sum = 0;

        if(!root) return false;

        st.push(root);
        while(!st.empty()) {
            TreeNode* Top = st.top();
            st.pop();
            sum += Top->val;

            if(sum > targetSum) {
                sum -= Top->val;
                continue;
            } else if(sum < targetSum) { 
                if(Top->right) st.push(Top->right);
                if(Top->left) st.push(Top->left);
            } else {
                return true;
            } 
        }
        
        return false;
    }
};