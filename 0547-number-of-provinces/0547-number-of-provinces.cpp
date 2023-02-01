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
    
    int findCircleNum(vector<vector<int>>& adj) {
        
        vector<int> arr[adj.size()];
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
        
        vector<int>vis(adj.size(),0);
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