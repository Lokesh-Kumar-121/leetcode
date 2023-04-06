/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    vector<TreeNode*>gg;
    
    void dfs(TreeNode* root,TreeNode* ele, vector<TreeNode*>&arr)
    {
        if(root == NULL)
            return;
        
        if(root->val == ele->val)
        {
            
            for(int i=0;i<gg.size();i++)
                arr.push_back(gg[i]);
            
            arr.push_back(root);
            return;
        }
        
        gg.push_back(root);
        
        dfs(root->left,ele,arr);
        // gg.pop_back();
        
        dfs(root->right,ele,arr);
        gg.pop_back();
    }
        
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        vector<TreeNode*>pp,qq;
        dfs(root,p,pp);
        gg.clear();
        dfs(root,q,qq);
        
        
//         for(auto x:pp)
//             cout<<x->val<<" ";
//         cout<<endl;
        
//         for(auto x:qq)
//             cout<<x->val<<" ";
//         cout<<endl;
        
        int i=1;
        // pp.push_back(root);
        TreeNode* ans = pp[0];
        while(i<pp.size() && i<qq.size())
        {
            TreeNode *x=pp[i];
            TreeNode *y=qq[i];
            if(x->val != y->val)
                return ans;
            else
                ans = x;
            
            i++;
        }
        
        return ans;
        
        
        // return root;
    }
};