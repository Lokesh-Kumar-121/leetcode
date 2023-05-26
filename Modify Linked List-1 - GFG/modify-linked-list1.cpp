//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
class Solution{
    public:
    
    Node* reverse(Node* head)
    {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = head->next;
        
        while(curr)
        {
            curr->next = prev;
            prev = curr;
            curr = next;
            if(curr)
                next = curr->next;
        }
        
        return prev;
    }
    
    struct Node* modifyTheList(struct Node *head)
    {
        //add code here.
        // Node* temp = reverse(head);
        // while(temp)
        // {
        //     cout<<temp->data<<endl;
        //     temp=temp->next;
        // }
        // cout<<endl;
        // return head;
        Node* start = head;
        Node* end = head;
        
        int n = 0;
        while(start != NULL)
        {
            n++;
            start = start->next;
        }
        
        start = head;
        
        if(n&1)
            n = (n/2)+1;
        else
            n = n/2;
            
        while(--n)
            end = end->next;
        
        Node* rev = end;
            
        Node* temp = reverse(end->next);
        end->next = temp;
        
        end=end->next;
            
        while(end!=NULL)
        {
            int temp = start->data;
            start->data = end->data - start->data;
            end->data = temp;
            start=start->next;
            end=end->next;
        }
        
        temp = reverse(rev->next);
        rev->next=temp;
        
        return head;
        
    }
};

// null 10 4 5 3

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends