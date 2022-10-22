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
    bool hasCycle(ListNode *head) {
        
        ListNode *fast=head;
        
        if(head==NULL)
            return false;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            head=head->next;
            
            if(fast==head)
                return true;
             
        }
        
        return false;
        
//         int t=10001;
//         while(t--)
//         {
//             if(head==NULL)
//                 return false;
            
//             head=head->next;
//         }
//         return true;
    }
};