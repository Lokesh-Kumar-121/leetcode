class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n, vector<int>());
        
        for (auto &edge : edges) {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }

        vector<bool> visited(n, false);
        function<bool(int, int)> dfs = [&](int node, int target) {
            visited[node] = true;
            if (node == target) return true;
            for (auto &next_node : graph[node]) {
                if (!visited[next_node])
                    if (dfs(next_node, target)) return true;
            }
            return false;
        };

        return dfs(source, destination);
    }
};