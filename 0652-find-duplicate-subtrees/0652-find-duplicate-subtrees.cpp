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
    string serializeSubTree(TreeNode* node, unordered_map<string, int>& subtrees, vector<TreeNode* > & duplicate){
        if (!node) return "#";
        string left = serializeSubTree(node->left, subtrees, duplicate);
        string right = serializeSubTree(node->right, subtrees, duplicate);

        string s = left + "," + right + "," + to_string(node->val);

        if (subtrees[s] == 1) duplicate.push_back(node);

        subtrees[s]++;
        return s;

    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode* > duplicate;
        unordered_map<string, int> subtrees;

        serializeSubTree(root, subtrees, duplicate);
        return duplicate;
    }
};