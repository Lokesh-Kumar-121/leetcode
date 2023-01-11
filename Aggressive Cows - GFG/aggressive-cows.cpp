//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

    bool check(int k,int gap,vector<int>&stalls)
    {
        k--;
        int ind=0;
        for(int i=1;i<stalls.size();i++)
        {
            if(k == 0)
                return true;
            if(abs(stalls[i] - stalls[ind]) >= gap)
            {
                k--;
                ind=i;
            }
        }
        if(k<=0)
            return true;
        
        return false;
    }

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        int left=1;
        int right=stalls[n-1]-stalls[0];
        int mx=right;
        int mid;
        
        while(left<=right)
        {
            mid=left+(right-left)/2;
            if(!(check(k,mid,stalls)))
            {
                right=mid-1;
            }
            else
            {
                if(mid==mx || !(check(k,mid+1,stalls)))
                {
                    return mid;
                }
                left=mid+1;
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends