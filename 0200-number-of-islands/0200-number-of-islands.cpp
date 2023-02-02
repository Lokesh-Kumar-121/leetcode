class Solution {
public:
    
    void dfs(int row,int col,vector<vector<char>>&grid)
    {
        if(row >= grid.size() || col >= grid[0].size())
            return;
        
        grid[row][col] = '#';
        
        if(row < grid.size() - 1 && grid[row+1][col] == '1')
            dfs(row+1,col,grid);
        
        if(col < grid[0].size() - 1 && grid[row][col+1] == '1')
            dfs(row,col+1,grid);
        
        if(row > 0 && grid[row-1][col] == '1')
            dfs(row-1,col,grid);
        
        if(col > 0 && grid[row][col-1] == '1')
            dfs(row,col-1,grid);
        
//         if(row < grid.size() - 1 && col < grid[0].size() - 1 && grid[row+1][col+1] == '1')
//             dfs(row+1,col+1,grid);
        
//         if(row > 0 && col > 0 && grid[row-1][col-1] == '1')
//             dfs(row-1,col-1,grid);
        
//         if(row > 0 && col < grid[0].size() - 1 && grid[row-1][col+1] == '1')
//             dfs(row-1,col+1,grid);
        
//         if(row < grid.size() - 1 && col > 0 && grid[row+1][col-1] == '1')
//             dfs(row+1,col-1,grid);
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j] == '1')
                {
                    count++;
                    dfs(i,j,grid);
                }
            }
        }
        
        return count;
    }
};