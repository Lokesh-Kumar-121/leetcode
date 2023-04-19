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
    struct info{
        TreeNode* root;
        bool marked;
        int steps;

        public:
            info(TreeNode* root, bool marked, int steps)
            {
                this->root=root;
                this->marked=marked;
                this->steps=steps;
            }
    };
    int longestZigZag(TreeNode* root) {
        if(root==nullptr) return 0;

        queue<info*>q;
        if(root->left) q.push(new info{root->left,false,2});
        if(root->right) q.push(new info{root->right,true,2});
        int maxi=0;
        while(!q.empty())
        {
            info *temp=q.front();
            q.pop();
            maxi=max(maxi,temp->steps);
            if(!temp->marked)
            {
                if(temp->root->right) q.push(new info {temp->root->right,true,temp->steps+1});
                if(temp->root->left) q.push(new info {temp->root->left,false,2});
            }
            if(temp->marked)
            {
                if(temp->root->right) q.push(new info {temp->root->right,true,2});
                if(temp->root->left) q.push(new info {temp->root->left,false,temp->steps+1});
            }
            delete temp;
        }
        return maxi==0?maxi:maxi-1;
    }
};