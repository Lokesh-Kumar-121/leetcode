//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
    void dfs(int node,vector<int>&vis,vector<int> arr[])
    {
        vis[node]=1;
        for(int i=0;i<arr[node].size();i++)
        {
            if(vis[arr[node][i]] == 0)
            {
                dfs(arr[node][i],vis,arr);
            }
        }
    }

    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<int> arr[V];
        for(int i=0;i<adj.size();i++)
        {
            for(int j=0;j<adj[i].size();j++)
            {
                if(adj[i][j] == 1 && i!=j)
                {
                    arr[i].push_back(j);
                    arr[j].push_back(i);
                }
            }
        }
        
        // for(auto x:arr)
        // {
        //     for(auto z:x)
        //     {
        //         cout<<z<<" ";
        //     }
        //     cout<<endl;
        // }
        vector<int>vis(V,0);
        int count=0;
        for(int i=0;i<vis.size();i++)
        {
            if(vis[i] == 0)
            {
                count++;
                dfs(i,vis,arr);
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
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends