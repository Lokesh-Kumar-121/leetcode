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
    ListNode* middleNode(ListNode* head) {
        
//         ListNode *temp=head;
//         int count=0;
        
//         while(temp != NULL)
//         {
//             count++;
//             temp=temp->next;
//         }
        
//         int mid=count/2 ;
       
//         while(mid--)
//         {
//             head=head->next;
            
//         }
        
//         return head;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast && fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        
        return slow;
        
    }
};