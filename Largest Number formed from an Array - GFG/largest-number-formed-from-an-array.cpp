//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:

    static bool cmp(string s1,string s2)
    {
        return (s1+s2 > s2+s1);
    }
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	string printLargest(vector<string> &arr) {
	   // code here
	   // for(int i=0;i<arr.size();i++)
	   // {
	   //     for(int j=i+1;j<arr.size();j++)
	   //     {
	   //        // int num1=stoll(arr[i]+arr[j]);
	   //        // int num2=stoll(arr[j]+arr[i]);
	   //        // if(num2 > num1)
	   //        //     swap(arr[i],arr[j]);
	   //        if(arr[j]+arr[i] > arr[i]+arr[j])
	   //         swap(arr[i],arr[j]);
	   //     }
	   // }
	    
	   // string res="";
	   // for(int i=0;i<arr.size();i++)
	   // {
	   //     res+=arr[i];
	   // }
	   // return res;
	   
	   
	   string res="";
	   sort(arr.begin(),arr.end(),cmp);
	   for(int i=0;i<arr.size();i++)
	   {
	       res+=arr[i];
	   }
	   return res;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<string> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printLargest(arr);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends