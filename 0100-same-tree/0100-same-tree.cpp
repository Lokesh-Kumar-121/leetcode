class Solution {
public:
   vector <int>v1,v2;
   void first(TreeNode *p){
       if(p){
           v1.push_back(p->val);
           first(p->left);
           first(p->right); }
           v1.push_back(0);

   }
   void second(TreeNode *q){
       if(q){
           v2.push_back(q->val);
           second(q->left);
           second(q->right); }
           v2.push_back(0);

   }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        first(p);
        second(q);
        if(v1.size()!=v2.size()){return false;}
            for(int i=0; i<v1.size();i++){
               if( v1[i]!=v2[i]){
                return false;}
            }
            return true;
    }
};