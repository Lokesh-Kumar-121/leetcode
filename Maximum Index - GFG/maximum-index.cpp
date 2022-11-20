//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
    //     int diff1=INT_MIN;
    //     //int diff2;
        
    //     int i=0,j=n-1;
       
    //   while(i<n)
    //   {
    //       while(1)
    //       {
    //           if(arr[j] >= arr[i])
    //           {
    //               //cout<<arr[j]<<" "<<arr[i]<<endl;
    //               diff1=max(diff1,j-i);
    //               break;
    //           }
    //           j--;
    //       }
    //       j=n-1;
    //       i++;
    //   }
        
    //     return diff1;
    
    
         int lmin[n];
         int rmax[n];
         
         lmin[0]=arr[0];
         for(int i=1;i<n;i++)
         {
             lmin[i]=min(arr[i],lmin[i-1]);
         }
         
         rmax[n-1]=arr[n-1];
         for(int i=n-2;i>=0;i--)
         {
             rmax[i]=max(arr[i],rmax[i+1]);
         }
         
        //  for(auto x:lmin)
        //     cout<<x<<" ";
        // cout<<endl;
        //   for(auto x:rmax)
        //     cout<<x<<" ";
        // cout<<endl;
        
        
        int i=0,j=0;
        int diff=INT_MIN;
        while(i<n && j<n)
        {
            if(rmax[j] >= lmin[i])
            {
                diff=max(diff,j-i);
                j++;
            }
            else
                i++;
        }
        
        
        return diff;
         
         
         
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends