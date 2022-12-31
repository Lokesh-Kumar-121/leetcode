class Solution {
public:
    int visited[101][101];

    int getPaths(vector<vector<int>>& obstacleGrid,int i, int j, int count, int nonEmpty){
        if( i<0 || i>=obstacleGrid.size() || j<0 || j>=obstacleGrid[0].size() || obstacleGrid[i][j]==-1 || visited[i][j] == 1){
            return 0;
        }
        count++;
        if(obstacleGrid[i][j]==2){
            if(obstacleGrid.size()*obstacleGrid[0].size() == count + nonEmpty) return 1;
            return 0;
        }
        visited[i][j] = 1;
        int down = getPaths(obstacleGrid,i + 1,j, count,nonEmpty);
        int right = getPaths(obstacleGrid,i ,j + 1, count,nonEmpty);
        int left = getPaths(obstacleGrid,i ,j - 1, count,nonEmpty);
        int up = getPaths(obstacleGrid,i - 1,j, count,nonEmpty);
        visited[i][j] = -1;
        return down + right + up + left;
    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        int iStart = 0;
        int jStart = 0;
        int nonEmpty = 0;
        for(int i = 0 ; i<grid.size(); i++){
            for(int j = 0; j<grid[0].size(); j++){
                if(grid[i][j]==1){
                    iStart = i;
                    jStart = j;
                }
                if(grid[i][j]==-1)nonEmpty++;
            }
        }
        memset(visited, -1,sizeof(visited));
        return getPaths(grid,iStart,jStart,0,nonEmpty);
    }
};