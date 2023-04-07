class Solution {
    int helper(vector<vector<int>>& grid, int sr, int sc){
        int m = grid.size(), n = grid[0].size();
        if (sr == -1 || sr == m || sc == -1 || sc == n){
            return -1;
        }
        if (grid[sr][sc] == 0){
            return 0;
        }
        grid[sr][sc] = 0;
        int op1 = helper(grid, sr+1, sc);
        int op2 = helper(grid, sr-1, sc);
        int op3 = helper(grid, sr, sc+1);
        int op4 = helper(grid, sr, sc-1);
        if (op1 == -1 || op2 == -1 || op3 == -1 || op4 == -1){
            return -1;
        }
        return 1 + op1 + op2 + op3 + op4;
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int count =0 ;
        int m = grid.size(), n = grid[0].size();
        for(int i=1; i<m-1; i++){
            for(int j=1; j<n-1; j++){
                if (grid[i][j] == 1){
                    int op = helper(grid, i, j);
                    if (op!= -1){
                        count += op;
                    }
                }
            }
        }
        return count;
    }
};