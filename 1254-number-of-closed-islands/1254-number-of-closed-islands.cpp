class Solution {
public:
    const int land = 0;
    const int water = 1;
    const int marked = -1;
    bool traverse(vector<vector<int>>& grid, int i, int j){
        if(i<0 || i >=grid.size() || j<0 || j>=grid[i].size()) return false;
        if(grid[i][j] == water || grid[i][j] == marked) return true;
        grid[i][j] = marked;

        bool top = traverse(grid, i, j+1);
        bool down = traverse(grid, i, j-1);
        bool right = traverse(grid, i+1, j);
        bool left = traverse(grid, i-1, j);
        return top&&down&&left&&right;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int totalIslands = 0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j] == land && traverse(grid, i, j))
                {
                    totalIslands++;
                }
            }
        }
        return totalIslands;
    }
};