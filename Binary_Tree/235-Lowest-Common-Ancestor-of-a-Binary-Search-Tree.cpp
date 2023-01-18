/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* cur = root;
        int big, small;
        if(p->val > q->val){
            big = p->val;
            small = q->val;
        }
        else{
            big = q->val;
            small = p->val;
        }
        // we want small <= cur <= big
        while(!(small <= cur->val  && cur->val <= big)){
            if(cur->val < small){
                cur = cur -> right;
            }
            else if(cur->val > big){
                cur = cur -> left;
            }
        }
        return cur;
    }
};
