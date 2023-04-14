//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
// #include<bits/stdc++.h>
#include<bits/stdc++.h>
class Solution {
  public:
    int finLength(int N, vector<int> color, vector<int> radius) {
    
    // stack<int>st;
    vector<long long> nums,arr2;
    nums.push_back(color[0]);
    arr2.push_back(radius[0]);
    for(long long i=1;i<N;i++)
    {
        if(color[i] == nums[nums.size()-1] && radius[i] == arr2[arr2.size()-1])
        {
            nums.pop_back();
            arr2.pop_back();
        }
        else
        {
            nums.push_back(color[i]);
            arr2.push_back(radius[i]);
        }
    }
    
    return nums.size();
    
    // stack<pair<int,int>> st;
    // st.push({color[0],radius[0]});
    // for(int i=1;i<N;i++)
    // {
    //     if(st.empty())
    //     {
    //         st.push({color[i],radius[i]});
    //         continue;
    //     }
        
    //     if(color[i] == st.top().first && radius[i] == st.top().second)
    //     {
    //         st.pop();
    //     }
    //     else
    //         st.push({color[i],radius[i]});
    // }
    
    // return st.size();
    }
};


//{ Driver Code Starts.
int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        vector<int> color(n), radius(n);
        for (int i = 0; i < n; i++) cin >> color[i];
        for (int i = 0; i < n; i++) cin >> radius[i];
        int ans = sol.finLength(n, color, radius);
        cout << ans << "\n";
    }

    return 0;
}

// } Driver Code Ends