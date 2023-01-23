/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
//         ListNode* curr=node;
//         ListNode* nex=node->next;
//         while(nex->next)
//         {
//             curr->val=nex->val;
//             nex=nex->next;
//             curr=curr->next;
//         }
        
//         curr->next=NULL;
         node->val=node->next->val;
         node->next=node->next->next;

    }
};