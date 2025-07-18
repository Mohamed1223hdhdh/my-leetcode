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
    vector<int> preorderTraversal(TreeNode* root) {
    if (root == nullptr) return {};

    vector <int> inorder_result;

    inorder_result.push_back(root->val);

    vector<int> left = preorderTraversal(root->left);
    inorder_result.insert(inorder_result.end(), left.begin(), left.end());

    

    vector<int> right = preorderTraversal(root->right);
    inorder_result.insert(inorder_result.end() , right.begin() , right.end());

    return inorder_result;

}
};