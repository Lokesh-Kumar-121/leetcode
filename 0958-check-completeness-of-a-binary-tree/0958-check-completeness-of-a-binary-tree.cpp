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
    bool isCompleteTree(TreeNode* root) {
        //queue for bfs
        queue<TreeNode*> q;
        //pushing the root
        q.push(root);
        //variable to check if tree is not complete 
        bool is_not_complete=false;
        while(!q.empty()){
            //poping the elements of the queue
            TreeNode* curr=q.front();
            q.pop();
            //if there is an empty node that is encountered while poping then make is_not_complete as true
            if(curr==NULL) is_not_complete=true;
            else{
                q.push(curr->left);
                q.push(curr->right);    
                //returning false if elements exists after a NULL has already been pushed 
                if(is_not_complete) return false;
            }
        }
    //if the above loops fails to return false then definetly it is a complete binary tree
        return true;
    }
};