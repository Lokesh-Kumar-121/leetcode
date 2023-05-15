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
    ListNode* swapNodes(ListNode* head, int k) {
        
        int n = 0;
        int begsize = 0;
        ListNode* temp = head;
        ListNode* beg;
        // ListNode* end;
        
        while(temp != NULL)
        {
            n++;
            begsize++;
            if(begsize == k)
            {
                beg = temp;
            }
            
            temp = temp->next;
        }
        
        temp = head;
        k = n - k;
        
        while(k--)
        {
            temp = temp->next;
        }
        
        // cout<<beg->val<<endl;
        // cout<<temp->val;
        int tt = beg->val;
        beg->val = temp -> val;
        temp->val = tt;
        
        
        return head;
        
    }
};