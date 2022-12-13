//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
       long long arr[n+1];
       int sum=0;
       arr[0]=sum;
       
       for(int i=0;i<n;i++)
       {
           sum+=a[i];
           arr[i+1]=sum;
       }
       
       int ind=-1;
       for(int i=1;i<n+1;i++)
       {
           if(arr[i-1] == arr[n]-arr[i])
           {
               ind = i;
               break;
           }
       }
       return ind;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends