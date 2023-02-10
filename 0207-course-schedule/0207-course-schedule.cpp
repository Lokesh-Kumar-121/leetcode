class Solution {
public:
    
//     void dfs(int node,vector<int>adj[],vector<int>&vis,vector<int>&res)
//     {
//         vis[node] = 1;
//         for(int i=0;i<adj[node].size();i++)
//         {
//             if(vis[adj[node][i]] == 0)
//                 dfs(adj[node][i],adj,vis,res);
//         }
        
//         res.push_back(node);
//     }
    
    
    bool canFinish(int num, vector<vector<int>>& pre) {
        
        vector<int>adj[num];
        for(int i=0;i<pre.size();i++)
        {
            int x=pre[i][0];
            int y=pre[i][1];
            adj[x].push_back(y);
        }
        
        vector<int>indegree(num,0);
        vector<int>topo;
        
        for(auto x:adj)
        {
            for(auto z:x)
            {
                indegree[z]++;
            }
        }
        
        queue<int>q;
        
        for(int i=0;i<indegree.size();i++)
        {
            if(indegree[i] == 0)
                q.push(i);
        }
        
        while(!q.empty())
        {
            int node = q.front();
            topo.push_back(node);
            q.pop();
            
            for(int i=0;i<adj[node].size();i++)
            {
                indegree[adj[node][i]]--;
                if(indegree[adj[node][i]] == 0)
                    q.push(adj[node][i]);
            }
        }
        
        // for(auto x:topo)
        //     cout<<x<<" ";
        // cout<<endl;
        
        if(topo.size() == num)
            return true;
        
        return false;
          
    }
};

// 3 1 2 4

//     0 1 2 3 4
// 0 1 2 3

