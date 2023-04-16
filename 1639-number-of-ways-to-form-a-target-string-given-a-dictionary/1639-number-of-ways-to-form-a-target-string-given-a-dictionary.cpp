class Solution {
    long dfs(int i, int j, int n, int m, vector<unordered_map<char, int>> &v, string &t, int mod, vector<vector<int>> &dp) {
        if(j == m) return 1;
        if(i == n) return 0;
        if(dp[i][j] != -1) return dp[i][j];

        long  pick = v[i][t[j]] * dfs(i + 1, j + 1, n, m, v, t, mod, dp);
        long notpick = dfs(i + 1, j, n, m, v, t, mod, dp);

        return dp[i][j] = (pick + notpick) % mod;
    }
public:
    int numWays(vector<string>& words, string target) {
        int n = words[0].size(), m = target.size(),  mod = 1e9 + 7;
        vector<unordered_map<char, int>> v(n, unordered_map<char, int>());

        for(string w : words) {
            for(int i=0; i<n; i++) v[i][w[i]]++;
        }
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return dfs(0, 0, n, m, v, target, mod, dp);
    }
};