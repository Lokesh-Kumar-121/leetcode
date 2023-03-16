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
    TreeNode *dfs(int l, int r, int i, 
                unordered_map <int, int> &m, 
                vector <int> &a, vector <int> &b) {
    return l >= r ? NULL : new TreeNode(b[i], 
        dfs(l, m[b[i]], i - (r - m[b[i]]), m, a, b),
        dfs(m[b[i]] + 1, r, i - 1, m, a, b)
    ); 
}
TreeNode* buildTree(vector<int>& a, vector<int>& b) {
    unordered_map <int, int> m;
    for (int i = 0; i < a.size(); i++)
        m[a[i]] = i;
    return dfs(0, a.size(), a.size() - 1, m, a, b);
}
};