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
    int solve(TreeNode* root){
         if(!root)
            return INT_MAX-1;
        if(!root->left && !root->right)
            return 1;
        return 1+min(solve(root->left),solve(root->right));
    }
    int minDepth(TreeNode* root) {
       if(!root)
           return 0;
        return solve(root);
    }
};