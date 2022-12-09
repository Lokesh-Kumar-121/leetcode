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
    int findMaxDiff(TreeNode* root,int maxV,int minV){
        if(root == NULL){
            return abs(maxV-minV);
        }

        maxV = max(root->val,maxV);
        minV = min(root->val,minV);

        int left = findMaxDiff(root->left,maxV,minV);
        int right = findMaxDiff(root->right,maxV,minV);

        return max(right,left);
    }

    int maxAncestorDiff(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        return findMaxDiff(root,root->val,root->val);
    }
};