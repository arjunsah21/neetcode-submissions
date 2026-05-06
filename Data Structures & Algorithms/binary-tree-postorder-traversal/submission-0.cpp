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
    void postOrder(TreeNode* head, vector<int>& res) {
        if (!head) return;
        postOrder(head->left, res);
        postOrder(head->right, res);
        res.push_back(head->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        postOrder(root, res);

        return res;
    }
};