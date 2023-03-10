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
    vector<int> res;
public:
    Solution(ListNode* head) 
    {
        ListNode*p=head;
        while(p)
        {
            res.push_back(p->val);
            p=p->next;
        }
    }
    
    int getRandom() 
    {
        return res[rand()%res.size()];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */