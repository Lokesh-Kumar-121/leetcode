// class Solution {
// public:
    
    
// //     int bfs(int row,int col,vector<vector<int>>&grid,vector<vector<int>>&vis)
// //     {
// //         int count=0;
// //         // vis[row][col] = 1;
// //         queue<pair<int,int>>q;
// //         q.push({row,col});
        
// //         int flag=0;
// //         while(!q.empty())
// //         {
// //             count++;
// //             int n=q.size();
// //             for(int i=0;i<n;i++)
// //             {
// //                 int x=q.front().first;
// //                 int y=q.front().second;
// //                 q.pop();
// //                 if(grid[x][y] == 1)
// //                 {
// //                     flag=1;
// //                     break;
                    
// //                 }
                
// //                 if(x < grid.size()-1 && vis[x+1][y] == 0)
// //                 {
// //                     q.push({x+1,y});
// //                     // vis[x+1][y] = 1;
// //                 }  
// //                 if(y < grid[0].size()-1 && vis[x][y+1] == 0)
// //                 {
// //                     q.push({x,y+1});
// //                     // vis[x][y+1] = 1;
// //                 }
                    
// //                 if(x > 0 && vis[x-1][y] == 0)
// //                 {
// //                     q.push({x-1,y});
// //                     // vis[x-1][y] = 1;
// //                 }    
                    
// //                 if(y > 0 && vis[x][y-1] == 0)
// //                 {
// //                     q.push({x,y-1});
// //                     // vis[x][y-1] = 1;
// //                 }    
                    
// //             }
            
// //             if(flag==1)
// //                 break;
// //         }
        
// //         return count-1;
// //     }
    
    
//     int bfs(int row,int col,vector<vector<int>>&grid)
//     {
//         int count=0;
//         queue<pair<int,int>>q;
//         q.push({row,col});
        
//         while(!q.empty())
//         {
//             count++;
//             int n=q.size();
//             for(int i=0;i<n;i++)
//             {
//                 int x=q.front().first;
//                 int y=q.front().second;
//                 q.pop();
                
//                 if(x < grid.size()-1 && grid[x+1][y] == 0)
//                     q.push({x+1,y});
//                 if(y < grid.size()-1 && grid[x][y+1] == 0)
//                     q.push({x,y+1});
//                 // if(x > 0 && grid[x-1][y] == 0)
//                 //     q.push({x-1,y});
//                 // if(y > 0 && grid[x][y-1] == 0)
//                 //     q.push({x,y-1});
//             }
//         }
        
//         return count-1;
//     }
    
//     int maxDistance(vector<vector<int>>& grid) {
        
// //         vector<vector<int>>vis(grid.size(),vector<int>(grid.size(),0));
// //         // for(auto x:vis)
// //         // {   for(auto z:x)
// //         //         cout<<z<<" ";
// //         //     cout<<endl;
// //         // }
// //         // cout<<endl;
// //         int ans=-1;
// //         for(int i=0;i<grid.size();i++)
// //         {
// //             for(int j=0;j<grid[0].size();j++)
// //             {
// //                 if(grid[i][j] == 0)
// //                 {
// //                     ans=max(ans,bfs(i,j,grid,vis));
// //                 }
// //             }
// //         }
        
// //         return ans;
    
        
//         int ans=-1;
//         for(int i=0;i<grid.size();i++)
//         {
//             for(int j=0;j<grid[0].size();j++)
//             {
//                 if(grid[i][j] == 1)
//                 {
//                     ans=max(ans,bfs(i,j,grid));
//                 }
//             }
//         }
        
//         return ans;
//     }
        
// };


class point{
    public:
    int x;
    int y;
    point(int X,int Y){
        x=X;y=Y;
    }
};
class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        queue<point> q;
        int n = grid.size();
        vector<vector<int>> map(n,vector<int>(n,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]){
                    q.push(point(i,j));
                    map[i][j]=0;
                }
            }
        }
        int maxi = -1;
        while(!q.empty()){
            point temp = q.front();
            q.pop();
            int x = temp.x;
            int y = temp.y;
            maxi = max(maxi,map[x][y]);
            if(x>0 && map[x-1][y]<0){
                map[x-1][y] = map[x][y]+1;
                q.push(point(x-1,y));
            }
            if(x<n-1 && map[x+1][y]<0){
                map[x+1][y] = map[x][y]+1;
                q.push(point(x+1,y));
            }
            if(y>0 && map[x][y-1]<0){
                map[x][y-1] = map[x][y]+1;
                q.push(point(x,y-1));
            }
            if(y<n-1 && map[x][y+1]<0){
                map[x][y+1] = map[x][y]+1;
                q.push(point(x,y+1));
            }
        }
        return maxi==0?-1:maxi;
    }
};