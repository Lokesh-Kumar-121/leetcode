//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minRepeats(string A, string B) {
        // code here
        int n=B.length()/A.length();
        n+=2;
        int count=1;
        string t=A;
        
        while(n--)
        {
            //cout<<A<<endl;
            if(A.find(B) < A.size())
                return count;
            
            A+=t;
            count++;
        }
        
        return -1;
    }
};

// abcde




//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends