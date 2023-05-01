//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int n, vector<int> &arr) {
        // code here
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(arr[i]);
            }
            else
            {
                if(arr[i] > 0)
                {
                    // if(st.top() > 0)
                    // {
                    //     st.push(arr[i]);
                    //     continue;
                    // }
                    // if(arr[i] == abs(st.top()))
                    // {
                    //     st.pop();
                    //     continue;
                    // }
                    // while(!st.empty() && (st.top() < 0 && arr[i] > abs(st.top())))
                    // {
                    //     st.pop();
                    // }
                    // if(!st.empty() && arr[i] <= abs(st.top()))
                    // {
                    //     st.pop();
                    //     continue;
                    // }
                    // st.push(arr[i]);
                    st.push(arr[i]);
                }
                else
                {
                    if(st.top() < 0)
                    {
                        st.push(arr[i]);
                        continue;
                    }
                    if(abs(arr[i]) == st.top())
                    {
                        st.pop();
                        continue;
                    }
                    while(!st.empty() && (st.top() > 0 && abs(arr[i]) > st.top()))
                    {
                        st.pop();
                    }
                    if(!st.empty() && abs(arr[i]) == st.top())
                    {
                        st.pop();
                        continue;
                    }
                    if(!st.empty() && abs(arr[i]) < st.top())
                    {
                        // st.pop();
                        continue;
                    }
                    st.push(arr[i]);
                }
            }
        }
        
        vector<int>ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};

// 6
// -5 5 2 1 1 -2

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends