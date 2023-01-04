//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
        int mn=INT_MAX;
        for(int i=0;i<patt.length();i++)
        {
            int ind=str.find(patt[i]);
            if(ind <= str.length() || ind != -1)
                mn=min(mn,ind);
        }
        if(mn==INT_MAX)
            return -1;
        return mn;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}

// } Driver Code Ends