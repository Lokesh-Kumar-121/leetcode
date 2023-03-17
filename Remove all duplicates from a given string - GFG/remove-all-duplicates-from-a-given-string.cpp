//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    string res="";
	    vector<int>arr(58,0);
	    for(int i=0;i<str.length();i++)
	    {
	        if(arr[str[i] - 'A'] == 0)
	        {
	            res+=str[i];
	            arr[str[i] - 'A'] = 1;
	        }
	        
	    }
	    
	    return res;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends