//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        // Your code goes here
        sort(A,A+n);
        sort(B,B+m);
        
        int sum1=accumulate(A,A+n,0ll);
        int sum2=accumulate(B,B+m,0ll);
        
        if(sum1 > sum2)
        {
            int i=n-1;
            int j=0;
            
            while(i>=0 && j<m)
            {
                int s1=sum1-A[i];
                int s2=sum2-B[j];
                if(s1 + B[j] == s2 + A[i])
                {
                    return 1;
                }
                else
                    i--;j++;
            }
        }
        else if(sum1 == sum2)
        return 1;
        else
        {
            int i=0;
            int j=m-1;
            
            while(i<n && j>=0)
            {
                int s1=sum1-A[i];
                int s2=sum2-B[j];
                if(s1 + B[j] == s2 + A[i])
                {
                    return 1;
                }
                else 
                    i++;j--;
            }
        }
        
        return -1;
        
	}
	
	
 

};

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}






// } Driver Code Ends