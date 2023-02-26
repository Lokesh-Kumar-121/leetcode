//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  void dfs(int node,vector<vector<int>>&adj, vector<int>&vis , vector<int>& tempvis)
  {
      vis[node]=1;
      tempvis[node] = 1;
      
      for(auto it : adj[node])
      {
          if(!vis[it])
          {
              dfs(it,adj,vis,tempvis);
          }
      }
  }
  
    int findNumberOfGoodComponent(int V, vector<vector<int>>& adj) {
        // code here
        // vector<int> adj[V+1];
        // for(int i=0;i<mat.size();i++)
        // {
        //     for(int j=0;j<mat[i].size();j++)
        //     {
        //         if(mat[i][j] == 1 && i!=j)
        //         {
        //             adj[i].push_back(j);
        //             adj[j].push_back(i);
        //         }
        //     }
        // }
        
        // for(auto x:mat)
        // {
        //     for(auto z:x)
        //         cout<<z<<" ";
        //     cout<<endl;
        // }
        
        // for(int i=0;i<V+1;i++)
        // {
        //     cout<<i<<"-";
        //     for(int j=0;j<adj[i].size();j++)
        //     {
        //         cout<<adj[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
        vector<int>vis(V+1,0);
        
        
        int count=0;
        for(int i=1;i<V+1;i++)
        {
            vector<int>tempvis(V+1,0);
            if(vis[i] == 0)
            {
                dfs(i,adj,vis,tempvis);
                
                int sum = accumulate(tempvis.begin(),tempvis.end(),0ll);
                int flag=0;
                for(int i=1;i<tempvis.size();i++)
                {
                    if(tempvis[i] == 1 && adj[i].size() != sum-1)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    count++;
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
        int E, V;
        cin >> E >> V;
        vector<vector<int>> adj(V + 1, vector<int>());
        for (int i = 0; i < E; i++) {
            int u, v;

            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;

        int res = obj.findNumberOfGoodComponent(V, adj);
        cout << res << "\n";
    }
    return 0;
}
// } Driver Code Ends