//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  long int count=0;
  vector<vector<int>>dp;
  int mod = 1e9+7;
  int func(int row,int col,vector<vector<int>>&grid)
  {
      if(row >= grid.size() || col >= grid[0].size())
      {
          return 0;
      }
      
      if(row == grid.size()-1 && col == grid[0].size()-1)
      {
        //   count++;
          return 1;
      }
      if(dp[row][col]!=-1)
      return dp[row][col];
      int x=0,y=0;
      if(row<grid.size()-1 && grid[row+1][col] == 1)
         x=func(row+1,col,grid);
    
      if(col < grid[0].size()-1 && grid[row][col+1] == 1)
         y=func(row,col+1,grid);
        // else
        return dp[row][col]=(x+y)%mod;
      
      
  }
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        if(grid[0][0] == 0)
            return 0;
            dp.resize(n,vector<int>(m,-1));
        
       return func(0,0,grid)%mod;
        // return count%mod;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends