//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkCompressed(string S, string T) {
        // code here
        int count=0;
        // int flag=0;
        for(int i=0;i<T.length();i++)
        {
            if(isalpha(T[i]))
            {
                // cout<<T[i]<<" "<<S[count]<<endl;
                // flag=1;
                if(T[i] != S[count])
                    return 0;
                count+=1;
            }
            else
            {
                string x="";
                while(!isalpha(T[i]))
                 {  
                     x+=T[i];
                     i++;
                 }
                count+=stoi(x);
                i--;
            }
        }
        
        // cout<<count<<endl;
        // if(flag==0)
        //     return 0;
        if(S.length() != count)
            return 0;
            
        return 1;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends