//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int res[2];
        int *ptr=res;
        
        unordered_set<int>sett;
        
        for(int i=0;i<n;i++)
        {
            sett.insert(arr[i]);
        }
        
        for(int i=1;i<=n;i++)
        {
            if(sett.find(i) == sett.end()){
                res[1]=i;
                break;
            }
        }
        
        int sum1=0;
        int sum2=0;
        for(int i=0;i<n;i++)
        {
            sum1+=arr[i];
            sum2+=i+1;
        }
        
        sum1+=res[1];
        
        res[0]=sum1-sum2;
        
        return ptr;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends