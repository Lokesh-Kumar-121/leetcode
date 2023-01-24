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
    
    // void func(TreeNode* root,vector<int>&res)
    // {
    //     if(!root)
    //         return;
    //     //cout<<root->val<<" ";
    //     res.push_back(root->val);
    //     func(root->left,res);
    //     func(root->right,res);
    // }
    
    vector<int> preorderTraversal(TreeNode* root) {
        // vector<int>res;
        // func(root,res);
        // return res;
        
        //*****using stack*****//itreative one
        if(!root)
            return {};
        vector<int>res;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty())
        {
            root=st.top();
            st.pop();
            res.push_back(root->val);
            
            if(root->right)
                st.push(root->right);
            if(root->left)
                st.push(root->left);
        }
        return res;
    }
};