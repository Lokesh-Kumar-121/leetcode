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
    void f(TreeNode *root,int curr,int &res){
        curr= curr*10 + root->val;
        if(!root->left and !root->right){
            res+=curr;
        }
        if(root->left){
            f(root->left,curr,res);
        }
        if(root->right){
            f(root->right,curr,res);
        }
        curr/=10;
        return ;
    }
    int sumNumbers(TreeNode* root) {
        if(!root) return 0;
        int res=0;
        f(root,0,res);
        return res;
    }
};