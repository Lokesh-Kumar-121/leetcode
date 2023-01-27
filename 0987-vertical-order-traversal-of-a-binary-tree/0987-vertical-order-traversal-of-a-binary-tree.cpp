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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        vector<vector<int>>res;
        vector<vector<pair<int,int>>>arr;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        pair<TreeNode*,int>pp;
        while(!q.empty())
        {
            int n=q.size();
            vector<pair<int,int>>temp;
            for(int i=0;i<n;i++)
            {
                pp=q.front();
                temp.push_back({pp.first->val,pp.second});
                q.pop();
                if(pp.first->left)
                    q.push({pp.first->left,pp.second-1});
                if(pp.first->right)
                    q.push({pp.first->right,pp.second+1});
                
            }
            arr.push_back(temp);
        }
        
        map<int,vector<int>>mapp;
        for(auto x:arr)
        {
            sort(x.begin(),x.end());
            for(auto z:x)
            {
                mapp[z.second].push_back(z.first);
            }
            
        }
        
        for(auto x:mapp)
        {
            res.push_back(x.second);
        }
        
        return res;
        
//         vector<vector<int>>res;
//         queue<pair<TreeNode*, int>> q;
//         q.push({root, 0});
//         pair<TreeNode*,int>pp;
//         map<int,vector<int>>mapp;
//         while(!q.empty())
//         {
//             int n=q.size();
//             for(int i=0;i<n;i++)
//             {
//                 pp=q.front();
//                 q.pop();
//                 mapp[pp.second].push_back(pp.first->val);
//                 if(pp.first->left)
//                     q.push({pp.first->left,pp.second-1});
//                 if(pp.first->right)
//                     q.push({pp.first->right,pp.second+1});
    
//             }
            
//         }
        
        
//         for(auto x:mapp)
//         {
//             sort(x.second.begin(),x.second.end());
//             res.push_back(x.second);
//         }
        
//         return res;
        
    }
};