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
    int diameterOfBinaryTree(TreeNode* root) {
        int result = 0;
        helper(root, result);
        return result;
    }
    
    int helper(TreeNode* cur, int& result){
        if(cur == nullptr){
            return 0;
        }
        int left =  helper(cur->left, result);
        int right =  helper(cur->right, result);
        if(result < left + right){
            result = left + right;
        }
        return max(left, right) + 1;
    }
};
