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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* ret = createTree(nums, 0, nums.size()-1);
        return ret;
    }
    TreeNode* createTree(vector<int>& nums, int start, int end){
        if(start > end){
            return NULL;
        }
        int mid = start + (end - start) / 2;
        TreeNode* cur = new TreeNode(nums[mid]);
        cur->left = createTree(nums, start, mid-1);
        cur->right = createTree(nums, mid+1, end);
        return cur;
    }
};
