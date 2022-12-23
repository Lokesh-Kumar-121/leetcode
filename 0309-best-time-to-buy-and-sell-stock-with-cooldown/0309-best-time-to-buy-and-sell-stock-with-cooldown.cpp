class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int N = prices.size();
        vector<vector<int>> dp(N + 1, vector<int>(2, -1));
        auto dfs = [&] (auto &&dfs, int index, bool isBuyingAllowed) -> int {
            if (index >= N) return 0;
            int retValue = 0;
            if (dp[index][isBuyingAllowed] != -1) return dp[index][isBuyingAllowed];
            if (isBuyingAllowed) {
                retValue = max(-prices[index] + dfs(dfs, index + 1, !isBuyingAllowed), dfs(dfs, index + 1, isBuyingAllowed));
            } else {
                retValue = max(prices[index] + dfs(dfs, index + 2, !isBuyingAllowed), dfs(dfs, index + 1, isBuyingAllowed));
            }
            return dp[index][isBuyingAllowed] = retValue;
        };
        return dfs(dfs, 0, true);
    }
};