//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        vector <int> lexicographicallyLargest(vector <int> &a,int n)
        {
            // Code here
            int i=0,j=0;
            
            while(j<n)
            {
                if(a[i] & 1)
                {
                    if(j == n-1 && a[j] == a[j-1])
                    {
                        sort(a.begin()+i,a.end(),greater<int>());
                        continue;
                    }
                    
                    while(j<n && a[j]&1)
                    {
                        j++;
                    }
                    
                    
                    sort(a.begin()+i,a.begin()+j,greater<int>());
                }
                else
                {
                    if(j == n-1 && a[j] == a[j-1])
                    {
                        sort(a.begin()+i,a.end(),greater<int>());
                        continue;
                    }
                    
                    while(j<n && !(a[j]&1))
                    {
                        j++;
                    }
                    sort(a.begin()+i,a.begin()+j,greater<int>());
                }
                
                i = j;
                
            }
            
            return a;
            
        }
        
        // 1 3 5 7 8 10 12
        // 1 3 5 7 8 11 12
        
        // 1 3 5 4
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
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        vector <int> b=s.lexicographicallyLargest(a,n);
        for(auto i:b)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends