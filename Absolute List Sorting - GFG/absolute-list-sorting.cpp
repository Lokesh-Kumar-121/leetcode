//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Linked List Node
struct Node
{
	Node* next;
	int data;
};

// Utility function to insert a node at the
// beginning
void push(Node** head, int data)
{
	Node* newNode = new Node;
	newNode->next = (*head);
	newNode->data = data;
	(*head) = newNode;
}

// Utility function to print a linked list
void printList(Node* head)
{
	while (head != NULL)
	{
		cout << head->data;
		if (head->next != NULL)
			cout << " ";
		head = head->next;
	}
	cout << endl;
}


// } Driver Code Ends
/* The structure of the Linked list Node is as follows:
struct Node
{
    Node* next;
    int data;
}; */

/*Your method shouldn't print anything
 it should transform the passed linked list */
class Solution{
    
public:
    Node* sortList(Node* head)
    {
        // Your Code Here
        Node* temp=head;
        vector<int>arr;
        while(temp!=NULL)
        {
            arr.push_back(temp->data);
            temp=temp->next;
        }
        
        int n=arr.size();
        vector<int>res;
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i] < 0)
            {
                res.push_back(arr[i]);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(arr[i] >= 0)
            {
                res.push_back(arr[i]);
            }
        }
        
        temp=head;
        int i=0;
        while(temp!=NULL)
        {
            temp->data=res[i++];
            temp=temp->next;
        }
        
        return head;
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{

	int t = 0;
	int n = 0;
	cin >> t;
	while (t--)
	{
		Node* head = NULL;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			// push(&head, a);
		}
		for (int i = n - 1; i >= 0; i--)
		{
			push(&head, arr[i]);
		}
		// printList(head);
		
		Solution ob;
		head=ob.sortList(head);

		printList(head);

	}
	return 0;
}

// } Driver Code Ends