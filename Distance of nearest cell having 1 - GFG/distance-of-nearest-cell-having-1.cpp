//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>mat)
	{
	    // Code here
	    int n=mat.size();
	    int m=mat[0].size();
	    
	    vector<vector<int>>vis(n,vector<int>(m,0));
	   // vector<vector<int>>res(n,vector<int>(m,0));
	   
	   queue<vector<int>>q;
	   
	   for(int i=0;i<n;i++)
	   {
	       for(int j=0;j<m;j++)
	       {
	           if(mat[i][j] == 1)
	           {
	               q.push({i,j,0});
	               vis[i][j] = 1;
	           }
	       }
	   }
	   
	   while(!q.empty())
	   {
	       vector<int>temp=q.front();
	       q.pop();
	       int row=temp[0];
	       int col=temp[1];
	       int dist=temp[2];
	       
	       mat[row][col] = dist;
	       
	       if(row < mat.size()-1 && vis[row+1][col] == 0)
            {
                q.push({row+1,col,dist+1});
                vis[row+1][col] = 1;
            }
            if(col < mat[0].size()-1 && vis[row][col+1] == 0)
            {
                q.push({row,col+1,dist+1});
                vis[row][col+1] = 1;
            }
            if(row > 0 && vis[row-1][col] == 0)
            {
                q.push({row-1,col,dist+1});
                vis[row-1][col] = 1; 
            }
            if(col > 0 && vis[row][col-1] == 0)
            {
                q.push({row,col-1,dist+1});
                vis[row][col-1] = 1; 
            }
            
	   }
	   
	   return mat;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends