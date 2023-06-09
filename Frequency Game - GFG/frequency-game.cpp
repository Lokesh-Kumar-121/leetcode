//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
        unordered_map<int,int>mapp;
        for(int i=0;i<n;i++)
        {
            mapp[arr[i]]++;
        }
        
        
        int freq = INT_MAX;
        int ele = INT_MIN;
        
        for(auto x:mapp)
        {
            if(x.second == freq && x.first > ele)
            {
                ele = x.first;
            }
            
            if(x.second < freq)
            {
                freq = x.second;
                ele = x.first;
            }
        }
        
        return ele;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends