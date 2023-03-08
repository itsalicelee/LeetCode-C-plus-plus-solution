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
    bool isValidBST(TreeNode* root) {
      vector<int> nums;
      inOrder(root, nums);
      for(size_t i = 1; i < nums.size(); ++i){
          if (nums[i-1] >= nums[i]){
              return false;
          }
      }
      return true;
    }
    void inOrder(TreeNode* root, vector<int>& nums){
        if(root == NULL){
            return;
        }
        inOrder(root->left, nums);
        nums.push_back(root->val);
        inOrder(root->right, nums);
    }
};
