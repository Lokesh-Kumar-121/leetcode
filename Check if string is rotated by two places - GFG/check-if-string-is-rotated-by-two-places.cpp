//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        string temp=str1;
        int k=2;
        k%=str1.size();
        reverse(temp.begin(),temp.begin()+k);
        reverse(temp.begin()+k,temp.end());
        reverse(temp.begin(),temp.end());
        
        reverse(str1.begin(),str1.end()-k);
        reverse(str1.end()-k,str1.end());
        reverse(str1.begin(),str1.end());
        
        if(temp==str2 || str1==str2)
            return true;
        
        return false;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends