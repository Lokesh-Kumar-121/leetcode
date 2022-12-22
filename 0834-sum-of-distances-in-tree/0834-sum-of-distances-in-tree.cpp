class Solution {
    unordered_map<int, unordered_map<int, int>> cost;
    unordered_map<int, unordered_map<int, int>> count;
    pair<int, int> dfs(int node, int prev) {
        int cost_{0};
        int count_{1};
        for (auto [next, cost_next] : cost[node]) {
            if (next == prev) continue;
            if (cost_next == 0) {
                auto [c, cnt] = dfs(next, node);
                cost[node][next] =  c;
                count[node][next] = cnt;
            }
            cost_ += cost[node][next];
            count_ += count[node][next];
        }
        return {cost_+count_, count_};
    }
public:
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        for (vector<int>& v : edges) {
            cost[v[0]][v[1]] = 0;
            cost[v[1]][v[0]] = 0;
            count[v[0]][v[1]] = 0;
            count[v[1]][v[0]] = 0;
        }
        vector<int> ret(n);
        for (int i=0; i<n; ++i) {
            auto [cost_, count_] = dfs(i, -1);
            ret[i] = cost_ - count_;
        }
        return ret;
    }
};