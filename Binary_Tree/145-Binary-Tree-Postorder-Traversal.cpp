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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ret;
        traversal(ret, root);
        return ret;

    }
    void traversal(vector<int>& ret, TreeNode* root){
        if(root == nullptr){
            return;
        }
        traversal(ret, root->left);
        traversal(ret, root->right);
        ret.push_back(root->val);
    }
};
