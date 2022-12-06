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
    ListNode* oddEvenList(ListNode* head) {
        
        if(!head || !head->next || !head->next->next) return head;

        ListNode* curr = head;
        ListNode* evenHead = head->next;
        ListNode* ptr = evenHead;

        while(curr->next)
        {
            if(ptr->next) curr->next = ptr->next;
            else break;
            curr = curr->next;
            ptr->next = curr->next;
            ptr = ptr->next;
        }

        if(ptr) ptr->next = NULL;
        curr->next = evenHead;

        return head;
        
    }
};