/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// #include<bits/stdc++.h>
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        vector<ListNode*>arr1,arr2;
        ListNode* temp = headA;
        
        while(headA != NULL)
        {
            if(headA!= NULL)
            arr1.push_back(headA);
            headA = headA->next;
        }
        
        while(headB != NULL)
        {
            if(headB != NULL)
            arr2.push_back(headB);
            headB = headB->next;
        }
        
        // for(ListNode* x : arr1)
        //     cout<<x->val<<" ";
        // cout<<endl;
        // for(ListNode* x : arr2)
        //     cout<<x->val<<" ";
        // cout<<endl;
        
        int i = arr1.size()-1;
        int j = arr2.size()-1;
        
        while(i>=0 && j>=0)
        {
            if(arr1[i] != arr2[j])
            {
                return arr1[i] -> next;
            }
            
            i--;j--;
            if(i<0 && j<0)
                return temp;
            if(j < 0)
                return arr1[i]->next;
            if(i < 0)
                return arr2[j]->next;
                
        }
        
        return temp;
    }
};