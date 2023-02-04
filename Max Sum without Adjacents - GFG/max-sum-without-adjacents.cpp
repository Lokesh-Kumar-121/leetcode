//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent

	int func(int ind,int *arr,int n,vector<int>&dp)
	{
	    if(ind >= n)
	    {
	        return 0;
	    }
	    if(dp[ind]!=-1)
	    return dp[ind];
	    
	    return dp[ind]=max(arr[ind]+func(ind+2,arr,n,dp),func(ind+1,arr,n,dp));
	}
	
	int findMaxSum(int *arr, int n) {
	    // code here
	   vector<int>dp(1000005,-1);
	    return func(0,arr,n,dp);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends