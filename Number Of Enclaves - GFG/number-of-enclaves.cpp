//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  void dfs(int row,int col,vector<vector<int>>&grid)
  {
      grid[row][col] = 0;
      
      if(row<grid.size()-1 && grid[row+1][col] == 1)
      {
          dfs(row+1,col,grid);
      }
      if(col<grid[0].size()-1 && grid[row][col+1] == 1)
      {
          dfs(row,col+1,grid);
      }
      if(row>0 && grid[row-1][col] == 1)
        dfs(row-1,col,grid);
    
      if(col>0 && grid[row][col-1] == 1)
        dfs(row,col-1,grid);
    
  }
  
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        
        // vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i == 0 || j == 0 || i == n-1 || j == m-1)
                {
                    if(grid[i][j] == 1)
                    {
                        dfs(i,j,grid);
                    }
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == 1)
                    count++;
            }
        }
        
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends