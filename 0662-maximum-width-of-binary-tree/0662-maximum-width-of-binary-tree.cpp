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
    int widthOfBinaryTree(TreeNode* root) {
        
//         if(!root)
//             return 0;
//         vector<vector<int>>res;
//         queue<TreeNode*>q;
//         q.push(root);
        
//         while(!q.empty())
//         {
//             vector<int>arr;
//             vector<int>nums;
//             int n = q.size();
//             for(int i=0;i<n;i++)
//             {
//                 TreeNode* temp = q.front();
//                 q.pop();
                
//                 arr.push_back(temp->val);
//                 if(temp->left)
//                     q.push(temp->left);
//                 else
//                     nums.push_back(-1);

//                 if(temp->right)
//                     q.push(temp->right);
//                 else
//                     nums.push_back(-1);
//             }
            
//             res.push_back(arr);
//             res.push_back(nums);
//             nums.clear();
//             arr.clear();
//         }
        
//         for(auto x:res)
//         {
//             for(auto z:x)
//                 cout<<z<<" ";
//             cout<<endl;
//         }
        
        
        
        
//         return 0;
        
        if(!root)
            return 0;
        
        long long w = INT_MIN;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        
        while(!q.empty())
        {
            int n = q.size();
            long long first=0,last=0;
            for(int i=0;i<n;i++)
            {
                
                TreeNode* temp = q.front().first;
                int num = q.front().second;
                q.pop();
                if(i == 0)
                {
                    first = num;
                }
                if(i == n-1)
                {
                    last = num;
                }
                
                if(temp->left)
                {
                    q.push({temp->left,2*(num-first)+1});
                }
                if(temp->right)
                {
                    q.push({temp->right,2*(num-first)+2});
                }
            }
            
            w = max(w,last-first+1);
        }
        
        return w;
        
    }
};