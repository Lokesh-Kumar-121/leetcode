class Solution {
public:
    
    void dfs(int row,int col,int color,vector<vector<int>>&grid,int ori)
    {
        if(row>=grid.size() || col >= grid[0].size())
            return;
        
        if(grid[row][col] == ori)
        {
            grid[row][col]=color;
            // cout<<"hii"<<" ";
        }
            
        
        
        if(row < grid.size() - 1 && grid[row+1][col] == ori)
            dfs(row+1,col,color,grid,ori);
        
        if(col < grid[0].size() - 1 && grid[row][col+1] == ori)
            dfs(row,col+1,color,grid,ori);
        
        if(row > 0 && grid[row-1][col] == ori)
            dfs(row-1,col,color,grid,ori);
        
        if(col > 0 && grid[row][col-1] == ori)
            dfs(row,col-1,color,grid,ori);
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        // cout<<image[sr][sc]<<endl;
        if(image[sr][sc] == color)
            return image;
        dfs(sr,sc,color,image,image[sr][sc]);
        return image;
        
    }
};