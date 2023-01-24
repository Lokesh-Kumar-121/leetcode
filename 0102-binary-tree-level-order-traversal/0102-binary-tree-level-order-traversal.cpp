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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        if(root == NULL)
            return {};
        
        queue<TreeNode*>q;
        vector<vector<int>>res;
        q.push(root);
        while(!q.empty())
        {
            
            int t=q.size();
            vector<int>arr;
            for(int i=0;i<t;i++)
            {
                
                TreeNode* temp=q.front();
                q.pop();
                arr.push_back(temp->val);
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            
            res.push_back(arr);
            arr.clear();
        }
        return res;
    }
};