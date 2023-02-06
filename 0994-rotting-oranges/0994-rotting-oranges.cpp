class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int flag1=0,flag2=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j] == 1)
                    flag1=1;
                if(grid[i][j] == 2)
                    flag2=1;
            }
        }
        
        if(flag1 == 0 && flag2 ==0)
            return 0;
        if(flag1 == 1 && flag2 == 0)
            return -1;
        if(flag1 == 0 && flag2 == 1)
            return 0;
        
        queue<pair<int,int>>q;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j] == 2)
                    q.push({i,j});
            }
        }
        
        int count=0;
        while(!q.empty())
        {
            count++;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                
            pair<int,int>pp=q.front();
            q.pop();
            
            int row=pp.first;
            int col=pp.second;
            
            if(row < grid.size()-1 && grid[row+1][col] == 1){
                grid[row+1][col] = 2;
                q.push({row+1,col});
            }
            if(col < grid[0].size()-1 && grid[row][col+1] == 1){
                grid[row][col+1] = 2;
                q.push({row,col+1});
            }
            if(row > 0 && grid[row-1][col] == 1){
                grid[row-1][col] = 2;
                q.push({row-1,col});
            }
            if(col > 0 && grid[row][col-1] == 1){
                grid[row][col-1] = 2;
                q.push({row,col-1});
            }
                
            }
        }
        
        
        for(auto x:grid)
            for(auto z:x)
                if(z == 1)
                    return -1;
        
        return count-1;
    }
};