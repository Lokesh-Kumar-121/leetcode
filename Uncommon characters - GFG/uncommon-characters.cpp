//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            int s1[26]={0};
            int s2[26]={0};
            
            for(int i=0;i<A.length();i++)
            {
                s1[A[i] - 'a']++;
            }
            for(int i=0;i<B.length();i++)
            {
                s2[B[i] - 'a']++;
            }
            
            // for(auto x:s1)
            // cout<<x<<" ";
            // cout<<endl;
            // for(auto x:s2)
            // cout<<x<<" ";
            // cout<<endl;
            
            
            string res="";
            int i=0;
            while(i<26)
            {
                if(s1[i]!=0 && s2[i]==0)
                {
                    // int cnt=s1[i];
                    // while(cnt--)
                    // {
                    //     res+=i+'a';
                    // }
                    res+=i+'a';
                }
                else if(s2[i]!=0 && s1[i]==0)
                {
                    // int cnt=s2[i];
                    // while(cnt--)
                    // {
                    //     res+=i+'a';
                    // }
                    res+=i+'a';
                }
                i++;
            }
            
            if(res=="")
            return "-1";
            return res;
            
            
            
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends