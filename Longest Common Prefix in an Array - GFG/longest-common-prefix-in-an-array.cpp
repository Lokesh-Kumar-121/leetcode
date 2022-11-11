//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
       
       int count=INT_MAX;
       int ind;
       for(int i=0;i<N;i++)
       {
           if(arr[i].length() < count){
                count=arr[i].length();
                ind=i;
           }
       }
       
       
       for(int i=0;i<N;i++)
       {
           if(arr[i].find(arr[ind]) > 0)
            {
                if(arr[ind].size() != 0){
                    arr[ind].pop_back();
                    i=-1;
                }
            }
       }
       
       if(arr[ind].size()==0)
        return "-1";
      
       return arr[ind];
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends