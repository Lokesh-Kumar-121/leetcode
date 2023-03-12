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
    ListNode* merge2lists(ListNode* &l1 , ListNode* &l2)
    { 
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        if(l1==NULL)    return l2;
        if(l2==NULL)    return l1;
        
        if(l1->val > l2->val)   swap(l1,l2);
        ListNode* ans=l1;
        while(l1!=NULL && l2!=NULL)
        {
            ListNode* prev=NULL;
            while(l1!=NULL && l1->val <= l2->val)
            {
                prev=l1;
                l1=l1->next;
            }
            prev->next=l2;
            swap(l1,l2);
        }
        return ans;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        if(lists.size()==0) return NULL;
        if(lists.size()==1) return lists[0];

        for(int i=1;i<lists.size();i++) lists[0] = merge2lists(lists[0] , lists[i]);

        return lists[0];
    }
};