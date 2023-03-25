class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        long long ans = 0;
        vector<bool> used(n, false);
        vector<vector<int>> adj(n);
        ans = ((long long)n * (n - 1)) / 2;
        for(auto edge : edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        for(int i = 0 ; i < n ; i++){
            if(!used[i]){
                long long count = 0, add = 0;
                solve(used, adj, &count, i, &add);
                ans -= count;
            }
        }
        return ans;
    }
    void solve(vector<bool>& used, vector<vector<int>>& adj, long long *count, int node, long long *add){
        used[node] = true;
        for(auto edge : adj[node]){
            if(!used[edge]){
                (*add) += 1;
                (*count) += (*add);
                solve(used, adj, count, edge, add);
            }
        }
    } 
};