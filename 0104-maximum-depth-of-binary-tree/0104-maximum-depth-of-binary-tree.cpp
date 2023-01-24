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
    int maxDepth(TreeNode* root) {
         
        if(!root)
        {
            return 0;
        }
        
        int count=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            count++;
            int t=q.size();
            for(int i=0;i<t;i++)
            {
                root=q.front();
                q.pop();
                if(root->left)
                    q.push(root->left);
                if(root->right)
                    q.push(root->right);
                
            }
        }
        return count;
    }
};