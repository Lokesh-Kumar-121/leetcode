//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],long long int n, long long int k) {
    
    vector<long long>arr;
    deque<long long>q;
    
    for(int i=0;i<k;i++)
    {
        if(A[i] < 0)
            q.push_back(A[i]);
    }
    
    if(q.empty())
        q.push_back(0);
    
    int i=0,j=k;
    
    while(j<=n)
    {
        arr.push_back(q.front());
        if(A[i] == q.front())
            q.pop_front();
        i++;
        if(A[j] < 0)
        {
            while(!q.empty() && q.back() == 0)
                q.pop_back();
            q.push_back(A[j]);
        }
        else
            q.push_back(0);
        j++;
    }
    
    return arr;
    
 }