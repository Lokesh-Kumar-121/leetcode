//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool dfs(int node,int p,vector<int> adj[], vector<int>&vis)
    {
        vis[node]=1;
        
        for(int i=0;i<adj[node].size();i++)
        {
            if(vis[adj[node][i]] == 0)
            {
                if(dfs(adj[node][i],node,adj,vis) == true)
                    return true;
            }
            else if(adj[node][i] != p)
                return true;
        }
        
        return false;
    }
    
    // bool bfs(pair<int,int> pairr,vector<int> adj[],vector<int>& vis)
    // {
        
    //     queue<pair<int,int>>q;
    //     q.push(pairr);
    //     // cout<<pairr.first<<" "<<pairr.second<<"  ";
    //     vis[pairr.first]=1;
        
        
    //     while(!q.empty())
    //     {
    //         pair<int,int>pp = q.front();
    //         q.pop();
    //         for(int i=0;i<adj[pp.first].size();i++)
    //         {
    //             if(adj[pp.first][i] == pp.second)
    //                 continue;
    //             if(vis[adj[pp.first][i]] == 1)
    //                 return true;
    //             else
    //             {
    //                 vis[adj[pp.first][i]] = 1;
    //                 q.push({adj[pp.first][i],pp.first});
    //             }
    //         }
    //     }
        
    //     return false;
        
    // }
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        //bfs/////////////////////////////////////////////////////////
        // vector<int>vis(V,0);
        // for(int i=0;i<vis.size();i++)
        // {
        //     if(vis[i] == 0)
        //     {
        //         // cout<<bfs({i,-1} ,adj ,vis)<<" #"<< endl;
        //         if(bfs({i,-1} ,adj ,vis) == true)
        //             return true;
        //     }
        // }
        
        // return false;
        
        
        ////////////////dfs///////////////////////////////
        vector<int>vis(V,0);
        
        for(int i=0;i<V;i++)
        {
            if(vis[i] == 0)
            {
                if(dfs(i,-1,adj,vis) == true)
                    return true;
            }
        }
        
        return false;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends