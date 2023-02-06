//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
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
        // Code here 
        if(image[sr][sc] == color)
            return image;
        dfs(sr,sc,color,image,image[sr][sc]);
        return image;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends