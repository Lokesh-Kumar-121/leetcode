// class Solution {
// public:
//     int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
//         // int count = 0;
//         if(grid[0][0] == 1)
//             return -1;
//         queue<vector<int>>q;
//         q.push({0,0,1});
        
//         while(!q.empty())
//         {
//             vector<int>temp = q.front();
//             q.pop();
//             int row = temp[0];
//             int col = temp[1];
//             int dist = temp[2];
            
//             if(row == grid.size() - 1 && col == grid[0].size()-1)
//                 return dist;
            
//             grid[row][col] = 2;
            
//             if(row < grid.size() - 1 && grid[row+1][col] == 0)
//                 q.push({row+1,col,dist+1});
        
//             if(col < grid[0].size() - 1 && grid[row][col+1] == 0)
//                 q.push({row,col+1,dist+1});

//             if(row > 0 && grid[row-1][col] == 0)
//                 q.push({row-1,col,dist+1});

//             if(col > 0 && grid[row][col-1] == 0)
//                 q.push({row,col-1,dist+1});

//             if(row < grid.size() - 1 && col < grid[0].size() - 1 && grid[row+1][col+1] == 0)
//                 q.push({row+1,col+1,dist+1});

//             if(row > 0 && col > 0 && grid[row-1][col-1] == 0)
//                 q.push({row-1,col-1,dist+1});

//             if(row > 0 && col < grid[0].size() - 1 && grid[row-1][col+1] == 0)
//                 q.push({row-1,col+1,dist+1});

//             if(row < grid.size() - 1 && col > 0 && grid[row+1][col-1] == 0)
//                 q.push({row+1,col-1,dist+1});
//         }
        
//         return -1;
        
//     }
// };

// // 1 0 0
// // 1 1 0
// // 1 1 0

class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]!=0)
        {
            return -1;
        }
        int drow[]={-1,-1,-1,0,1,1,1,0};
        int dcol[]={-1,0,1,1,1,0,-1,-1};
        queue<pair<int,pair<int,int>>> q;
        int n=grid.size();
        if(n==1)
        {
            return 1;
        }
        vector<vector<int>> dist(n,vector<int>(n,1e9));
        q.push({1,{0,0}});
        dist[0][0]=0;
        while(!q.empty())
        {
            auto itr=q.front();
            q.pop();
            for(int i=0;i<8;i++)
            {
                int currrow=itr.second.first+drow[i];
                int currcol=itr.second.second+dcol[i];
                if(currrow>=0 && currrow<n && currcol>=0 && currcol<n && grid[currrow][currcol]==0 && itr.first+1<dist[currrow][currcol])
                {
                    if(currrow==n-1 && currcol==n-1)
                    {
                        return itr.first+1;
                    }
                    dist[currrow][currcol]=itr.first+1;
                    q.push({itr.first+1,{currrow,currcol}});
                }
            }
        }
        return -1;
    }
};