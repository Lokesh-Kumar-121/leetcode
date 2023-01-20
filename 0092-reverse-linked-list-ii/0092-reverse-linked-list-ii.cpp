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
    
    ListNode* func(ListNode* head)
    {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* prev=NULL;
        ListNode* curr=head;
        
        while(curr)
        {
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        
        return prev;
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        int count=0;
        ListNode*temp=head;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        
        if(left==1 && right==count)
        {
            head=func(head);
            return head;
        }
        
        if(left==1)
        {
            ListNode* end=head;
            while(--right)
            {
                end=end->next;
            }
            ListNode* dead=end->next;
            end->next=NULL;
            head=func(head);
            ListNode* temp=head;
            while(temp->next)
            {
                temp=temp->next;
            }
            temp->next=dead;
            return head;
        }
        
        if(right==count)
        {
            ListNode* start=head;
            ListNode* begin=head;
            left--;
            while(--left)
            {
                begin=begin->next;
            }
            start=begin->next;
            start=func(start);
            begin->next=start;
            return head;
        }
        
        ListNode* begin=head;
        ListNode* end=head;
        
        left--;
        while(--left)
        {
            begin=begin->next;
        }
        while(--right)
        {
            end=end->next;
        }
        ListNode* start=begin->next;
        ListNode* dead=end->next;
        end->next=NULL;
        start=func(start);
        begin->next=start;
        while(start->next)
        {
            start=start->next;
        }
        start->next=dead;
        
        return head;
        
    }
};