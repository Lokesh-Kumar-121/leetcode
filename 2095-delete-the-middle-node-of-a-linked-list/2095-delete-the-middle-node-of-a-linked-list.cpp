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
    ListNode* deleteMiddle(ListNode* head) {
     
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        delete temp;
        //cout<<count<<endl;
        
        if(count==0 || count==1)
            return NULL;
        
        int mid=count/2-1;
        
        ListNode *ohead=head;
        while(mid--)
        {
            head=head->next;
        
        }
        
        //cout<<head->val<<endl;
        ListNode* t=head->next;
        head->next=t->next;
        delete t;
        
        return ohead;
            
    }
};