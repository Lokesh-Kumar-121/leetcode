//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int arr[], int n) {
	    // code here
	    int numsum=0,resum=-1;
	    vector<int>res={-1};
	    vector<int>num;
	    
	    for(int i=0;i<=n;i++)
	    {
	       if(i<n && arr[i] >= 0)
	       {
	           numsum+=arr[i];
	           num.push_back(arr[i]);
	       }
	       
	       if(arr[i] < 0 || i==n)
	       {
	           if( numsum > resum || numsum >= resum && num.size() > res.size())
	           {
	               res.clear();
	               for(int i=0;i<num.size();i++)
	               {
	                   res.push_back(num[i]);
	               }
	               resum=numsum;
	               //numsum=0;
	               //num.clear();
	           }
	           numsum=0;
	           num.clear();
	       }
	       
	    }
	    return res;
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

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
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends