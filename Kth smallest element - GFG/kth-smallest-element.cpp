//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        //int n=sizeof(arr)/sizeof(arr[0]);
        
        priority_queue<int> pq;    // max heap
      // priority_queue<int,vector<int>,greater<int>> pq;  //min heap
       
       for(int i=l;i<=r;i++)
       {
           pq.push(arr[i]);
           if(pq.size()>k)
           pq.pop();
       }
       
    //   for(int i=0;i<k-1;i++)
    //   {
    //     //   int z=pq.top();
    //     //   cout<<z<<" ";
    //       pq.pop();
    //   }
       //cout<<endl;
       int x=pq.top();
       return x;
        
    }
};

//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends