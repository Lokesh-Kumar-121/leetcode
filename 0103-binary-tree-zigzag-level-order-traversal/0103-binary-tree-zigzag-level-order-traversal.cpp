class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)
            return {};
        
        queue<TreeNode*> q;
        vector<vector<int>> op;
        
        bool dir = false;
        
        q.push(root);
        while(!q.empty()){
            vector<int> v;
            int size = q.size();
            while(size--){
                root = q.front();
                q.pop();
                v.push_back(root->val);
                if(root->left)
                    q.push(root->left);
                if(root->right)
                    q.push(root->right);
            }
            if(dir) {
                reverse(v.begin(),v.end());
                dir = false;
            } else {
                dir = true;
            }
            op.push_back(v);
        }
        return op;
    }
};
