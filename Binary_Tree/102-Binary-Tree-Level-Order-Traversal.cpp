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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ret;
        queue<TreeNode*> q;
        if(root != NULL){
            q.push(root);
        }
        
        while(q.size() != 0){
            vector<int> level;
            size_t qSize = q.size();
            for(size_t i = 0; i < qSize; ++i){
                TreeNode* cur = q.front();
                level.push_back(cur->val);
                q.pop();
                if(cur->left != NULL){
                    q.push(cur->left);
                }
                if(cur->right != NULL){
                    q.push(cur->right);
                }
            }
            ret.push_back(level);
        }
        return ret;
    }

};
