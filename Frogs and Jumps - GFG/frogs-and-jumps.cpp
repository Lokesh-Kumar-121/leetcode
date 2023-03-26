//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
         int res = 0;
        vector<bool> pos(leaves+1);
        
        for(int i = 0; i < N; i++){
            int val = frogs[i];
            
            if(pos[val]) continue;
            
            for(int step = val; step <= leaves; step+=val) pos[step] = true;
        }
        
        for(int i = 1; i <= leaves; i++){
            if(pos[i] == false) res++;
        }
        return res;
    
    }
};


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends