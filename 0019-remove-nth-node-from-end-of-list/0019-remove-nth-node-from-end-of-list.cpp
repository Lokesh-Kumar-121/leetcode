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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(!head)
            return NULL;
        
        
        int count=0;
        ListNode *orihead=head;
        ListNode *temphead=head;
        while(temphead)
        {
            count++;temphead=temphead->next;
        }
       // cout<<count;
        
        if(count==1 && n==1)
            return NULL;
        
        if(n==count)
            return orihead->next;
        
        int counter=count-n-1;
        while(counter--)
        {
            head=head->next;
        }
        //cout<<head->val;
        head->next=head->next->next;
        return orihead;
    }
};