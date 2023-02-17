//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  void dfs(int i,int j,vector<vector<int>>&grid,int row,int col,vector<pair<int,int>>&temp)
  {
      grid[i][j] = 2;
      temp.push_back({i-row,j-col});
      
      if(i < grid.size()-1 && grid[i+1][j] == 1)
        dfs(i+1,j,grid,row,col,temp);
      if(j < grid[0].size()-1 && grid[i][j+1] == 1)
        dfs(i,j+1,grid,row,col,temp);
      if(i>0 && grid[i-1][j] == 1)
        dfs(i-1,j,grid,row,col,temp);
      if(j>0 && grid[i][j-1] == 1)
        dfs(i,j-1,grid,row,col,temp);
  }
  
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        set<vector<pair<int,int>>>sett;
        
        int n=grid.size();
        int m=grid[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == 1)
                {
                    vector<pair<int,int>>temp;
                    dfs(i,j,grid,i,j,temp);
                    sett.insert(temp);
                }
            }
        }
        
        return sett.size();
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
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends