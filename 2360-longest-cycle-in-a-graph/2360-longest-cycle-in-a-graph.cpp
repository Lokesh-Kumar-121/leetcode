class Solution {
public:

    using graph = vector<int>;
    using bvec = vector<bool>;
    using umap = unordered_map<int, int>;

    bvec v;
    graph g;
    umap call_stack;
    int n, curr, ans;

    void dfs (int i) {
        v[i] = true;
        // Insert the caller node into the simulated call stack along with its depth.
        ++curr, call_stack[i] = curr;
        if (g[i] != -1 and !v[g[i]]) { // Not visited node, visit it.
            dfs(g[i]);
        }
        else if (g[i] != -1 and call_stack.find(g[i]) != call_stack.end()) { // Cycle detected.
            ans = max(ans, curr - call_stack[g[i]] + 1); // Calculate the cycle length, relax the solution.
        }
        --curr, call_stack.erase(i);
    }

    int longestCycle(vector<int>& edges) {
        // Initializations.
        n = edges.size(), g = edges, v = bvec(n, false), curr = 0, ans = -1;
        // Handle A disconnected graph.
        for (int i = 0; i < n; ++i) {
            if (!v[i]) dfs(i);
        }
        return ans;
    }
};