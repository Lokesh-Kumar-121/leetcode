// class Solution {
// public:
//     bool possibleBipartition(int n, vector<vector<int>>& arr) {
        
//         unordered_set<int>sett1;
//         unordered_set<int>sett2;
        
//         for(int i=0;i<arr.size();i++)
//         {
//             if(sett1.find(arr[i][0]) != sett1.end())
//             {
                
//                 if(sett1.find(arr[i][1]) != sett1.end())
//                 {
//                     return false;
//                 }
//                 else
//                     sett2.insert(arr[i][1]);
//             }
//             else
//             {
//                 if(sett1.find(arr[i][1]) != sett1.end())
//                 {
//                     sett2.insert(arr[i][0]);
//                 }
//                 else
//                 {
//                     if(sett2.find(arr[i][0]) != sett2.end())
//                     {
//                         sett1.insert(arr[i][1]);
//                     }
//                     else
//                     {
//                         sett1.insert(arr[i][0]);
//                         sett2.insert(arr[i][1]);
//                     }
                
//                 }
//             }
            
//             if(sett2.find(arr[i][0]) != sett2.end())
//             {
//                 if(sett2.find(arr[i][1]) != sett2.end())
//                 {
//                     return false;
//                 }
//             }
              
//         }
//         // for(auto x:sett1)
//         //     cout<<x<<" ";
//         // cout<<endl;
//         // for(auto x:sett2)
//         //     cout<<x<<" ";
//         // cout<<endl;
        
//         return true;
        
//     }
// };

class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        const int nax = 1e4 + 9;
        vector<int> graph[nax];
        for (auto &x: graph)    x.clear();
        for (auto x: dislikes) {
            int u = x[0];
            int v = x[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        vector<int> color(nax, -1);
        auto dfs = [&] (auto &&dfs, int u) -> bool {
            for (int v: graph[u]) {
                if (color[v] == color[u])   return false;
                if (color[v] == -1) {
                    color[v] = 1 - color[u];
                    if (!dfs(dfs, v)) return false;
                }
            }
            return true;
        };
        for (int i = 1; i <= n; ++i) {
            if (color[i] == -1) {
                color[i] = 1;
                if (!dfs(dfs, i)) return false;
            }
        }
        return true;
    }
};
