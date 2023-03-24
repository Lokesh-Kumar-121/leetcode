// class Solution {
// public:
//     int minReorder(int n, vector<vector<int>>& arr) {
        
//         sort(arr.begin(),arr.end());
//         int count=0;
//         unordered_set<int>sett;
        
//         sett.insert(0);
        
//         for(int i=0;i<arr.size();i++)
//         {
//             if(sett.find(arr[i][0]) != sett.end())
//             {
//                 count++;
//                 sett.insert(arr[i][1]);
//             }
//             else
//                 sett.insert(arr[i][0]);
//         }
        
//         return count;
        
//     }
// };

// 0-2, 0-3, 5-0, 4-1, 4-5

class Solution {
public:
int count = 0;
void dfs(int par, int i , vector<vector<pair<int,int>>> &graph)
{
    for(auto &[child,dir] : graph[i])
    {
        if(child!=par)
        {
            count += dir;
            dfs(i,child,graph);
        }
    }
    return;
}
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int,int>>> graph(n);
        for(auto &x : connections)
        {
            graph[x[0]].push_back({x[1],0});
            graph[x[1]].push_back({x[0],1});
        }
        dfs(0,0,graph);
        return n-count-1;
    }
};