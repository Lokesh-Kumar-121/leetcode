// class Solution {
// public:
    
//     void func(int row,int col,vector<vector<int>>&grid,int sum,vector<int>&arr)
//     {
//         if(row>=grid.size() || col>=grid[0].size())
//             return;
        
//         sum+=grid[row][col];
        
//         if(row == grid.size()-1 && col == grid[0].size()-1)
//         {
//             arr.push_back(sum);
//             return;
//         }
        
        
        
//         func(row+1,col,grid,sum,arr);
//         func(row,col+1,grid,sum,arr);
//     }
    
//     int minPathSum(vector<vector<int>>& grid) {
        
//         vector<int>arr;
        
//         func(0,0,grid,0,arr);
        
//         return *min_element(arr.begin(),arr.end());
//     }
    
    class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        //for first row additivity
        for(int i=1;i<m;i++){
            grid[0][i] += grid[0][i-1];
        }

        //updating the path accrodingly 
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0){
                    grid[i][j] = grid[i][j] + grid[i-1][j];
                }
                else{
                    grid[i][j] = min(grid[i][j] + grid[i-1][j], grid[i][j] + grid[i][j-1]);
                }
            }
        }

// to print the output
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<grid[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
//according to the DP the minimum path to reach i,j from 0,0 will be found at i,j
        return grid[n-1][m-1];
    }
};