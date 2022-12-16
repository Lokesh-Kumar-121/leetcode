//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        //code here.
        // int left=0,right=0;
        // int i=0,j=n-1;
        // while(i<j)
        // {
        //     //cout<<left<<" ";
        //     left=left^arr[i];
        //     i++;
        //     //cout<<right<<endl;
        //     right=right^arr[j];
        //     j--;
        // }
        // //cout<<left<<" "<<right<<endl;
        // if(n&1)
        //     left^=arr[n/2];
        
        // return (left^right);
        
        
        int res=0;
        for(int i=0;i<n;i++)
        {
            res^=arr[i];
        }
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends