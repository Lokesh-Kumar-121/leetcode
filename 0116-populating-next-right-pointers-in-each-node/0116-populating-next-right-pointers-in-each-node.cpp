/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
//         if(!root)
//             return root;
        
//         queue<Node*>q;
//         q.push(root);
        
//         while(!q.empty())
//         {
//             int n=q.size();
//             vector<Node*>arr;
//             for(int i=0;i<n;i++)
//             {
//                 Node* temp=q.front();
//                 arr.push_back(temp);
//                 q.pop();
//                 if(q.empty())
//                     temp->next=NULL;
//                 else
//                     temp->next=q.front();
                
//             }
//             for(auto x:arr)
//             {
//                 if(x->left)
//                     q.push(x->left);
//                 if(x->right)
//                     q.push(x->right);
//             }
//         }
        
//         return root;
        
        if(!root)
            return root;
        root->next=NULL;
        queue<pair<Node*,Node*>>q;
        if(root->right)
            q.push({root->right,root});
        if(root->left)
            q.push({root->left,root});
        
        while(!q.empty())
        {
            // int n=q.size();
            
            // for(int i=0;i<n;i++)
            // {
                Node* parent = q.front().second;
                Node* temp = q.front().first;
                q.pop();
                
                if(parent->right && temp != parent->right)
                    temp->next = parent->right;
                
                else if(parent->next == NULL)
                    temp->next = NULL;
                    
                else if(parent->next->left)
                    temp->next = parent->next->left;
                    
                else if(parent->next->right)
                    temp->next = parent->next->right;
                    
                else
                    temp->next = NULL;
                
                
                if(temp->right)
                    q.push({temp->right,temp});
                if(temp->left)
                    q.push({temp->left,temp});
            // }
        }
        
        return root;
    }

    
};