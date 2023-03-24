//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    string removeReverse(string S) {
        // code here
        unordered_map<char,int>mapp;
        for(int i=0;i<S.length();i++)
        {
            mapp[S[i]]++;
        }
        int i=0,j=S.length()-1;
        bool flag=false;
        while(i<=j)
        {
            if(flag==false)
            {
                if(mapp[S[i]] > 1)
                {
                    mapp[S[i]]--;
                    S.erase(i,1);
                    flag=true;
                }
                else
                {
                    i++;
                }
                    // break;
                // i++;
            }
            else
            {
                if(mapp[S[j]] > 1)
                {
                    mapp[S[j]]--;
                    S.erase(j,1);
                    flag=false;
                }
                else
                    j--;
                    // break;
                // j--;
            }
        }
        
        if(flag==true)
        {
            reverse(S.begin(),S.end());
        }
            // return 
        
        return S;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends