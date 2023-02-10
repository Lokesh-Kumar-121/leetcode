//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    void dfs(int row, int col, vector<vector<char>>& mat)
    {
        mat[row][col] = '#';
        
        if(row < mat.size()-1 && mat[row+1][col] == 'O')
            dfs(row+1,col,mat);
        if(col < mat[0].size()-1 && mat[row][col+1] == 'O')
            dfs(row,col+1,mat);
        if(row > 0 && mat[row-1][col] == 'O')
            dfs(row-1,col,mat);
        if(col > 0 && mat[row][col-1] == 'O')
            dfs(row,col-1,mat);
    }

    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i == 0 || i == n-1 || j == 0 || j == m-1)
                {
                    if(mat[i][j] == 'O')
                    {
                        dfs(i,j,mat);
                    }
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j] == 'O')
                    mat[i][j] = 'X';
                
                if(mat[i][j] == '#')
                    mat[i][j] ='O';
            }
        }
        
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends