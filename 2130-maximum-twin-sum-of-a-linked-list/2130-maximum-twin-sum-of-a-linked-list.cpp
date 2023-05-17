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
    
    ListNode* reverseList(ListNode* head) {
        
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
    
    int pairSum(ListNode* head) {
        
        if(!head)
            return 0;
        
        int n=0;
        ListNode* temp = head;
        
        while(temp != NULL)
        {
            n++;
            temp=temp->next;
        }
        
        n = n/2;
        temp = head;
        while(--n)
        {
            temp = temp->next;
        }
        
        // cout<<temp->val<<endl;
        ListNode* rev = reverseList(temp->next);
        temp ->next = rev;
        
        temp = temp->next;
        
        int mx = INT_MIN;
        while(temp!=NULL)
        {
            mx = max(mx, head->val + temp->val);
            head = head->next;
            temp = temp->next;
        }
        
        return mx;
        
    }
};