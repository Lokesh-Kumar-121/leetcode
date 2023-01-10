//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {
        // Code here
        long long int count=0;
        map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        
        // for(auto x:m)
        //     cout<<x.first<<" "<<x.second<<endl;
        
        for(auto x:m)
        {
            while(x.second > 1)
            {
                int temp=x.first;
                while(m.find(temp) != m.end())
                {
                    temp++;
                    count++;
                }
                x.second--;
                m[temp]++;
            }
        }
            
        return count;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minIncrements(arr, N) << endl;
    }
}
// } Driver Code Ends