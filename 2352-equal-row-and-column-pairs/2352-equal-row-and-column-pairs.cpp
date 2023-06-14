class Solution {
public:
    
    bool check(int row, int col, vector<vector<int>>&grid)
    {
        for(int i=0; i<grid.size();i++)
        {
            if(grid[row][i] != grid[i][col])
                return false;
        }
        
        return true;
    }
    int equalPairs(vector<vector<int>>& grid) {
        
        int count = 0;
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid.size();j++)
            {
                if(check(i,j,grid))
                    count++;
            }
        }
        
        return count;
    }
};