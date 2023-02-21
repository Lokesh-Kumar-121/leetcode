//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> eventualSafeNodes(int V, vector<int>adj[]) {
        // code here
        
        // for(int i=0;i<V;i++)
        // {
        //     for(int j=0;j<adj[i].size();j++)
        //     {
        //         cout<<adj[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
        // cout<<adj->size();
        
        vector<int>res;
        vector<int>adj2[V];
        
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<adj[i].size();j++)
            {
                adj2[adj[i][j]].push_back(i);
            }
        }
        
        vector<int>ind(V);
        for(auto x:adj2)
        {
            for(auto z:x)
            {
                ind[z]++;
            }
        }
        
        queue<int>q;
        for(int i=0;i<ind.size();i++)
        {
            if(ind[i] == 0)
                q.push(i);
        }
        
        while(!q.empty())
        {
            int node=q.front();
            res.push_back(node);
            q.pop();
            
            for(int i=0;i<adj2[node].size();i++)
            {
                ind[adj2[node][i]]--;
                if(ind[adj2[node][i]] == 0)
                    q.push(adj2[node][i]);
            }
        }
        
        sort(res.begin(),res.end());
        return res;
        
        // return {};
    }
};

//reverse topo sort

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends