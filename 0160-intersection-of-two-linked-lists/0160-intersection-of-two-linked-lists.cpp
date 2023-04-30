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
        
//         vector<ListNode*>arr1,arr2;
//         ListNode* temp = headA;
        
//         while(headA != NULL)
//         {
//             if(headA!= NULL)
//             arr1.push_back(headA);
//             headA = headA->next;
//         }
        
//         while(headB != NULL)
//         {
//             if(headB != NULL)
//             arr2.push_back(headB);
//             headB = headB->next;
//         }
        
//         // for(ListNode* x : arr1)
//         //     cout<<x->val<<" ";
//         // cout<<endl;
//         // for(ListNode* x : arr2)
//         //     cout<<x->val<<" ";
//         // cout<<endl;
        
//         int i = arr1.size()-1;
//         int j = arr2.size()-1;
        
//         while(i>=0 && j>=0)
//         {
//             if(arr1[i] != arr2[j])
//             {
//                 return arr1[i] -> next;
//             }
            
//             i--;j--;
//             if(i<0 && j<0)
//                 return temp;
//             if(j < 0)
//                 return arr1[i]->next;
//             if(i < 0)
//                 return arr2[j]->next;
                
//         }
        
//         return temp;
        if(!headA || !headB)
            return NULL;
        
        ListNode*temp1 = headA;
        ListNode*temp2 = headB;
        int len1 = 0;
        while(headA != NULL)
        {
            len1++;
            headA = headA->next;
        }
        int len2 = 0;
        while(headB != NULL)
        {
            len2++;
            headB = headB->next;
        }
        
        if(len1 > len2)
        {
            int diff = len1 - len2;
            while(diff--)
            {
                temp1 = temp1->next;
            }
        }
        else
        {
            int diff = len2 - len1;
            while(diff--)
            {
                temp2 = temp2->next;
            }
        }
        
        while(temp1 != temp2)
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        return temp1;
        
    }
};