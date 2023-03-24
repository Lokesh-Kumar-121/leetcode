//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestXYDist(vector<vector<char>> grid, int N, int M) {
        // code here
        queue<vector<int>>q;
        vector<vector<int>>vis(N,vector<int>(M,0));
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                if(grid[i][j] == 'Y')
                {   
                    q.push({i,j,0});
                    vis[i][j] = 1;
                }
            }
        }
        
        while(!q.empty())
        {
            vector<int>temp = q.front();
            q.pop();
            int row=temp[0];
            int col=temp[1];
            int dist=temp[2];
            
            if(grid[row][col] == 'X')
                return dist;
            
            if(row > 0 && vis[row-1][col] == 0 )
            {
                q.push({row-1,col,dist+1});
                vis[row-1][col] = 1;
            }
                
            if(row < N-1 && vis[row+1][col] == 0 )
            {
                q.push({row+1,col,dist+1});
                vis[row+1][col] = 1;
            }
                
            if(col > 0 && vis[row][col-1] == 0 )
            {
                q.push({row,col-1,dist+1});
                vis[row][col-1] = 1;
            }
                
            if(col < M-1 && vis[row][col+1] == 0)
            {
                q.push({row,col+1,dist+1});
                vis[row][col+1] = 1;
            }
        }
        
        
        return -1;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        char ch;
        cin >> N >> M;

        vector<vector<char>> grid;

        for (int i = 0; i < N; i++) {
            vector<char> col;
            for (int i = 0; i < M; i++) {
                cin >> ch;
                col.push_back(ch);
            }
            grid.push_back(col);
        }

        Solution ob;
        cout << ob.shortestXYDist(grid, N, M) << endl;
    }
    return 0;
}
// } Driver Code Ends