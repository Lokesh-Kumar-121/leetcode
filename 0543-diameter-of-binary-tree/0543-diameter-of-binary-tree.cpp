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
    
    int help(TreeNode* root)
    {
        if(!root)
            return 0;
        return 1+max(help(root->left),help(root->right));
    }
    
    void func(TreeNode* root,int&mx)
    {
        if(!root)
            return;
        // mx=max(mx,help(root));//
        int left=help(root->left);
        int right=help(root->right);
        mx=max(mx,left+right);
        
        func(root->left,mx);
        func(root->right,mx);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;
        int mx=INT_MIN;
        func(root,mx);
        return mx;
        
    }
};