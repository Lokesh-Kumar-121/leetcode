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
        
//         ListNode *head2=head;
        
//         if(head==NULL)
//             return false;
        
//         while(1)
//         {
            
            
//             head=head->next;
            
//             if(head==NULL || head2==NULL)
//                 return false;
            
//             if(head2->next!=NULL)
//                 head2=head2->next->next;
            
//             if(head2==head)
//                 return true;
            
           
//         }
        
        int t=10001;
        while(t--)
        {
            if(head==NULL)
                return false;
            
            head=head->next;
        }
        return true;
    }
};