class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        
        int n=grid.size();
        vector<vector<int>>vis(n,vector<int>(n,0));
        int res=-1;
        
        queue<vector<int>>q;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j] == 1)
                {
                    q.push({i,j,0});
                    vis[i][j] = 1;
                }
            }
        }
        
        if(q.size() == n*n)
            return -1;
        
        while(!q.empty())
        {
            vector<int>temp=q.front();
            q.pop();
            int row=temp[0];
            int col=temp[1];
            int dist=temp[2];
            
            res=max(res,dist);
            
            if(row < grid.size()-1 && vis[row+1][col] == 0)
            {
                q.push({row+1,col,dist+1});
                vis[row+1][col] = 1;
            }
            if(col < grid[0].size()-1 && vis[row][col+1] == 0)
            {
                q.push({row,col+1,dist+1});
                vis[row][col+1] = 1;
            }
            if(row > 0 && vis[row-1][col] == 0)
            {
                q.push({row-1,col,dist+1});
                vis[row-1][col] = 1; 
            }
            if(col > 0 && vis[row][col-1] == 0)
            {
                q.push({row,col-1,dist+1});
                vis[row][col-1] = 1; 
            }
        }
        
        return res;
    }
};