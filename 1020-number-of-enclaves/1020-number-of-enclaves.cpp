class Solution {
public:
    
    void dfs(int row,int col,vector<vector<int>>&grid)
    {
        if(row >= grid.size() || col >= grid[0].size())
            return;
        
        grid[row][col] = 2;
        
        if(row < grid.size() - 1 && grid[row+1][col] == 1)
            dfs(row+1,col,grid);
        
        if(col < grid[0].size() - 1 && grid[row][col+1]  == 1)
            dfs(row,col+1,grid);
        
        if(row > 0 && grid[row-1][col] == 1)
            dfs(row-1,col,grid);
        
        if(col > 0 && grid[row][col-1]  == 1)
            dfs(row,col-1,grid);
          
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(i == 0 || j == 0 || i == grid.size()-1 || j == grid[0].size()-1)
                {
                    if(grid[i][j] == 1)
                    {
                        dfs(i,j,grid);
                    }
                }
            }
        }
        
        int count = 0;
        for(auto x:grid)
        {
            for(auto z:x)
            {
                if(z == 1)
                    count++;
            }
        }
        
        return count;
        
    }
};