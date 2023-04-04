//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) {
    // Write your code here
    int n=str.length();
int acount=0,bcount=0;

if(str[0] == 'a')
    acount++;
for(int i=1;i<n;i++)
{
    if(str[i] == 'a' && str[i-1] == 'b')
        acount++;
}

if(str[0] == 'b')
    bcount++;
for(int i=1;i<n;i++)
{
    if(str[i] == 'b' && str[i-1] == 'a')
        bcount++;
}

return min(acount,bcount)+1;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends