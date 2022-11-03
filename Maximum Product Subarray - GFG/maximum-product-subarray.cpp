//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	   long long int product=1;
	    long long int mx=INT_MIN;
	    
	    for(auto x: arr)
	    {
	        product*=x;  //cout<<product<<" ";
	        mx=max(mx,product); //cout<<mx<<" ";
	        if(product == 0)product=1;  //cout<<product<<endl;
	    }
	    
	    product=1;
	    reverse(arr.begin(),arr.end());
	    
	    for(auto x:arr)
	    {
	        product*=x;  //cout<<product<<" ";
	        mx=max(mx,product); //cout<<mx<<" ";
	        if(product == 0)product=1;
	    }
	    
	    
	    return mx;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends