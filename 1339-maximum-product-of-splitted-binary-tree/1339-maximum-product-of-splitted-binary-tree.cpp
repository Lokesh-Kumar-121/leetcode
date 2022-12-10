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
    int sum = 0;
    long long ans = 0;
    int totalSum(TreeNode* root)
    {
        if(!root)
        return 0;

        sum += root->val;
        totalSum(root->left);
        totalSum(root->right);
        return 0;
    }

    int nodeSum(TreeNode* root)
    {
        if(!root)
        return 0;

        long long a = nodeSum(root->left);
        long long b = nodeSum(root->right);
        root->val = root->val+a+b;

        return root->val;
    }

    void finalComputation(TreeNode* root)
    {
        if(!root)
        return;

        if(root->left)
        {
            long long a = sum - root->left->val;
            if(a*root->left->val > ans)
            ans = a*root->left->val;
        }
        
        if(root->right)
        {
            long long b = sum - root->right->val;
            if(b*root->right->val > ans)
            ans = b*root->right->val;
        }        

        finalComputation(root->left);
        finalComputation(root->right);
    }

    int maxProduct(TreeNode* root) {
        long long mod = 1e9+7;
        totalSum(root);
        nodeSum(root);
        finalComputation(root);
        return ans%mod;
        
    }
};