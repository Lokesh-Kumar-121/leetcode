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
    vector<int> inorderTraversal(TreeNode* root) {
     
//          vector<int> nodes;
//         stack<TreeNode*> todo;
//         while (root || !todo.empty()) {
//             while (root) {
//                 todo.push(root);
//                 root = root -> left;
//             }
//             root = todo.top();
//             todo.pop();
//             nodes.push_back(root -> val);
//             root = root -> right;
//         }
//         return nodes;
        
        vector<int>res;
        if(!root)
            return res;
        stack<pair<TreeNode*,int>>st;
        st.push({root,0});
        pair<TreeNode*,int>pp;
        while(!st.empty())
        {
            pp=st.top();
            st.pop();
            if(pp.second == 0)
            {
                if(pp.first->right)
                st.push({pp.first->right,0});
                st.push({pp.first,1});
                if(pp.first->left)
                st.push({pp.first->left,0});
            }
            else
            {
                res.push_back(pp.first->val);
            }
            
        }
        return res;
    }
};