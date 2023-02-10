class Solution {
public:
    vector<int> findOrder(int num, vector<vector<int>>& pre) {
        
        vector<int>res;
        vector<int> adj[num];
        vector<int>ind(num,0);

        for(int i=0;i<pre.size();i++)
        {
            int x=pre[i][0];
            int y=pre[i][1];
            ind[y]++;
            adj[x].push_back(y);
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
            q.pop();
            res.push_back(node);
            
            for(int i=0;i<adj[node].size();i++)
            {
                ind[adj[node][i]]--;
                if(ind[adj[node][i]] == 0)
                    q.push(adj[node][i]);
            }
        }
        
        if(res.size() != num)
            return {};
        
        reverse(res.begin(),res.end());
        
        return res;
        
    }
};
