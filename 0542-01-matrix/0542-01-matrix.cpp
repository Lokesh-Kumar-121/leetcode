class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        vector<vector<int>>res(mat.size(),vector<int>(mat[0].size(),0));
        vector<vector<int>>vis(mat.size(),vector<int>(mat[0].size(),0));
        
        queue<vector<int>>q;
        
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j] == 0)
                {
                    q.push({i,j,0});
                    vis[i][j]=1;
                }
            }
        }
        
        while(!q.empty())
        {
            vector<int>temp=q.front();
            int row=temp[0];
            int col=temp[1];
            int dist=temp[2];
            q.pop();
            // res[temp[0]][temp[1]] = temp[2];
            res[row][col] = dist;
            
            if(row < mat.size()-1 && vis[row+1][col] == 0)
            {
                q.push({row+1,col,dist+1});
                vis[row+1][col] = 1;
            }
            if(col < mat[0].size()-1 && vis[row][col+1] == 0)
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