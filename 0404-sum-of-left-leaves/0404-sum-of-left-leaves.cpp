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
    int sum=0;
    void pre(TreeNode* root,bool flag){
        if(!root)return;
        if(flag && !root->left && !root->right)
            sum+=root->val;
        pre(root->left,1);
        pre(root->right,0);
    
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)return 0;
        if(!root->left && !root->right)
            return 0;
        pre(root,1);
        return sum;
    }
};