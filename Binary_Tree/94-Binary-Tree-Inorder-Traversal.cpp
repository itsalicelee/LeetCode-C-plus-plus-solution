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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        traversal(result, root);
        return result;
    }
    void traversal(vector<int>& result, TreeNode* node){
        if(node == nullptr){
            return;
        }
        else{
            traversal(result, node->left);
            result.push_back(node->val);
            traversal(result, node->right);
        }
    }
};
