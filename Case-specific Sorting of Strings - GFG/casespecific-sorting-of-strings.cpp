//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    
    static bool cmp(char &a,char &b)
    {
        // if(islower(a) && isupper(b))
        //     return true;
        
        return a<b;
        
    }
    
    string caseSort(string str, int n)
    {
        // your code here
        string xx=str;
        sort(xx.begin(),xx.end(),cmp);
        
        int i=0,j=0;
        while(isupper(xx[j]))
            j++;
            
        for(int k=0;k<str.length();k++)
        {
            if(islower(str[k]))
            {
                str[k]=xx[j];
                j++;
            }
            else
            {
                str[k]=xx[i];
                i++;
            }
        }
        
        return str;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends