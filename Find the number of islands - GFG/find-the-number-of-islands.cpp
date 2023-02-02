//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    
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
        
        if(row < grid.size() - 1 && col < grid[0].size() - 1 && grid[row+1][col+1] == '1')
            dfs(row+1,col+1,grid);
        
        if(row > 0 && col > 0 && grid[row-1][col-1] == '1')
            dfs(row-1,col-1,grid);
        
        if(row > 0 && col < grid[0].size() - 1 && grid[row-1][col+1] == '1')
            dfs(row-1,col+1,grid);
        
        if(row < grid.size() - 1 && col > 0 && grid[row+1][col-1] == '1')
            dfs(row+1,col-1,grid);
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        // Code here
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

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends