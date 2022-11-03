/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)return NULL;
        ListNode *p=head,*t=NULL;
        while(p->next){
            if(p->next->val==val){
                p->next=p->next->next;
            }
            else
                p=p->next;
        }
        
        if(head->val==val)
            return head->next;
        else
            return head;
    }
};