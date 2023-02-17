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
    int minDiffInBST(TreeNode* root) {
        int minDiff = INT_MAX; // initialize minimum difference to largest possible integer
        TreeNode* prevNode = nullptr; // initialize the previous node to null
        inorderTraversal(root, prevNode, minDiff); // perform inorder traversal of the BST
        return minDiff;
    }
    
    void inorderTraversal(TreeNode* node, TreeNode*& prevNode, int& minDiff) {
        if (node == nullptr) {
            return;
        }
        inorderTraversal(node->left, prevNode, minDiff); // visit left subtree
        if (prevNode != nullptr) { // if this is not the first node visited
            minDiff = min(minDiff, abs(node->val - prevNode->val)); // update minimum difference
        }
        prevNode = node; // set current node as the previous node for the next iteration
        inorderTraversal(node->right, prevNode, minDiff); // visit right subtree
    }
};