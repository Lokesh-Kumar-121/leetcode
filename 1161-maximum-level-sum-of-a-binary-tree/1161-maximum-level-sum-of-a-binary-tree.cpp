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
    int maxLevelSum(TreeNode* root) {
        
        vector<vector<int>>nums;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int n = q.size();
            vector<int>temp;
            for(int i=0;i<n;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                temp.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            nums.push_back(temp);
        }
        
        
        
        int ans, mx=INT_MIN,level=1;
        
        for(auto x:nums)
        {
            int sum = 0;
            for(auto z:x)
            {
                // cout<<z<<" ";
                sum+=z;
            }
            if(sum > mx)
            {
                mx = sum;
                ans = level; 
            }
            level++;
            // cout<<endl;
        }
        
        
        return ans;
    }
};