//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
        int mod = 1000000007;
        sort(a,a+n);
         long long ans=0;
        for(long long  i=0;i<n;i++)
        {
            // ans = ((ans %mod)+((a[i]%mod) * (i%mod))%mod)%mod;
            // ans=ans%mod;
            long  long  x = ((a[i]%mod)*(i%mod))%mod;
            ans = (( ans%mod) + (x%mod))%mod;
        }
        
        return ans;
        // long int i, sum = 0;

        // sort(a, a+n);

        

        // for(i = 0; i < n; i++){

        //     sum = sum + (a[i] * i);

        // }

        // return sum % 1000000007;
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends