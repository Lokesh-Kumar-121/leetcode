//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
string _reverse(string str)
	{
	    int n=str.length();
	    int i=0,j=n-1;
	    
	    while(i<j)
	    {
	        swap(str[i],str[j]);
	        i++;j--;
	    }
	    
	    return str;
	}
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    string Rs= _reverse(S);
	   
	    
	    if(S==Rs)
	        return 1;
	    
	    return 0;
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends