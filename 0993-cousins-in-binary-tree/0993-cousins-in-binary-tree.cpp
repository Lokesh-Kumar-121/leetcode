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
    bool isCousins(TreeNode* root, int x, int y) {
        
        pair<int,int>xx = {0,0};
        pair<int,int>yy = {0,0};
        
        bool xb=false,yb=false;
        
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        
        while(!xb || !yb)
        {
            int n = q.size();
            for(int i=0;i<n;i++)
            {
            TreeNode* node = q.front().first;
            int parent = q.front().second.first;
            int dep = q.front().second.second;
            q.pop();
                
            if(node->val == x)
            {
                xb = true;
                xx = {parent,dep};
                
            }
            
            if(node->val == y)
            {
                yb = true;
                yy = {parent,dep};
            }
                
                if(node->left)
                    q.push({node->left,{node->val,dep+1}});
                if(node->right)
                    q.push({node->right,{node->val,dep+1}});
            }
            
            if(xb && yb)
            {
                if(xx.first != yy.first && xx.second == yy.second)
                    return true;
                return false;
            }
            
            
        }
        
        return false;
        
        
    }
};