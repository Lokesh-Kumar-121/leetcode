//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int n,int m, int src){
        // code here
        vector<int>adj[n];
        for(int i=0;i<m;i++)
        {
            int x=edges[i][0];
            int y=edges[i][1];
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        
        vector<int>dist(n,INT_MAX);
        dist[src] = 0;
        
        queue<pair<int,int>>q;
        q.push({src,dist[src]});
        
        // bfs
        
        while(!q.empty())
        {
            int node=q.front().first;
            int dis=q.front().second;
            q.pop();
            
            // dist[node] = min(dist[node],dis);
            
            for(int i=0;i<adj[node].size();i++)
            {
                // q.push({adj[node][i],dis+1});
                if(dist[adj[node][i]] > dis+1)
                {
                    dist[adj[node][i]] = dis+1;
                    q.push({adj[node][i],dis+1});
                }
            }
        }
        
        for(int i=0;i<dist.size();i++)
        {
            if(dist[i] == INT_MAX)
                dist[i] = -1;
        }
        
        return dist;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends