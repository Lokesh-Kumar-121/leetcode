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
    //int m=0;
    int count(TreeNode* root,int mx)
    {
        if(!root)
            return 0;
        mx=max(mx,root->val);
        int a=count(root->left,mx);
        int b=count(root->right,mx);
        // m=max(m,a+b);
        return a+b+(root->val>=mx);
        
        
    }
    
    int goodNodes(TreeNode* root) {
        if(!root)
            return 0;
        return count(root,root->val);
        // return m;
        
    }
};