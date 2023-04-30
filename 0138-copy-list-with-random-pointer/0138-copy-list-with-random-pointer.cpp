/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(!head)
            return head;
        
        Node* ori = head;
        
        while(head != NULL)
        {
            Node* temp = new Node(head->val);
            temp->next = head->next;
            head->next = temp;
            head = head->next->next;
        }
        
        head = ori;
        
        while(head != NULL)
        {
            if(head->random)
                head->next->random = head->random->next;
            else
                head->next->random = NULL;
            head = head->next->next;
        }
        
        head = ori;
        Node* copy = ori->next;
        Node* gg = ori->next;
        
        while(head!=NULL)
        {
            head->next = copy->next;
            if(copy->next)
                copy->next = copy->next->next;
            else
                copy->next = NULL;
            head = head->next;
            copy = copy->next;
        }
        
        // while(head!=NULL)
        // {
        //     if(head->next)
        //         head->next = head->next->next;
        //     else
        //         head->next = NULL;
        //     head = head->next;
        // }
        
        return gg;
    }
};

// 7 13 11 10 1 N
// 7 7 13 13 11 11 10 10 1 1 N