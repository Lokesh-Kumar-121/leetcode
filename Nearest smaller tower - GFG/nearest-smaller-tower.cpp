//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<int> nearestSmallerTower(vector<int> arr)
    {
        // code here
        vector<int>res;
        stack<pair<int,int>>st;
        
        for(int i=0;i<arr.size();i++)
        {
            if(st.empty())
            {
                res.push_back(-1);
                st.push({arr[i],i});
            }
            else
            {
                while(!st.empty() && st.top().first >= arr[i])
                {
                    st.pop();
                }
                if(st.empty())
                {
                    res.push_back(-1);
                    st.push({arr[i],i});
                }
                else
                {
                    res.push_back(st.top().second);
                    st.push({arr[i],i});
                }
                
            }
        }
        
        while(!st.empty())
            st.pop();
        
        for(int i=arr.size()-1;i>=0;i--)
        {
            if(st.empty())
            {
                // res.push_back(-1);
                st.push({arr[i],i});
            }
            else
            {
                while(!st.empty() && st.top().first >= arr[i])
                {
                    st.pop();
                }
                if(st.empty())
                {
                    // res.push_back(-1);
                    st.push({arr[i],i});
                }
                else
                {
                // cout<<"$"<<arr[i]<<endl;
                    if(res[i] == -1)
                    {
                        // if(arr[res[i]]  ==  st.top().first && st.top().second < res[i])
                            res[i] = st.top().second;
                        
                        
                    }
                    else
                    {
                        if(abs(i-res[i]) == abs(i-st.top().second) && arr[res[i]]  >  st.top().first)
                            res[i] = st.top().second;
                        if(abs(i-res[i]) > abs(i-st.top().second))
                            res[i] = st.top().second;
                    }
                    // if(res[i] == -1 || st.top().second < res[i])
                    // {
                    //     // cout<<"hii"<<endl;
                    //     res[i] = st.top().second;
                    // }
                    // else if(res[i] == -1 || (st.top().second == res[i] && arr[res[i]] > st.top().first))
                    // {
                    //     cout<<"hii"<<endl;   
                    //     res[i] = st.top().second;
                    // }
                        
                    st.push({arr[i],i});
                }
                
            }
        }
        
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution ob;
        vector<int> ans = ob.nearestSmallerTower(v);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends