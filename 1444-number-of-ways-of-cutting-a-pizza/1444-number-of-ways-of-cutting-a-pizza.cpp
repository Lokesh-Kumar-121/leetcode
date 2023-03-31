#include <bits/stdc++.h>
using namespace std;
const int maxn = 51;

const int mod = 1e9 + 7;
int sum[maxn][maxn];
int dp[maxn][maxn][maxn];

int dfs(int k, int lastv, int lasth, int n, int m)
{
    if (k == 0)
    {
        int r = sum[n][m] - sum[n][lastv - 1] - sum[lasth - 1][m] + sum[lasth - 1][lastv - 1];
        return r > 0;
    }
    if (dp[k][lastv][lasth] != -1) return dp[k][lastv][lasth];

    int ans = 0;
    for (int i = lasth + 1; i <= n; i++)
    {
        int cut = sum[i - 1][m] - sum[lasth - 1][m] - sum[i - 1][lastv - 1] + sum[lasth - 1][lastv - 1];
        if (cut > 0)
        {
            ans += dfs(k - 1, lastv, i, n,m);
            ans %= mod;
        }
    }

    for (int i = lastv + 1; i <= m; i++)
    {

        int cut = sum[n][i - 1] - sum[n][lastv - 1] - sum[lasth - 1][i - 1] + sum[lasth - 1][lastv - 1];
        if (cut > 0)
        {
            ans += dfs(k - 1, i, lasth, n,m);
            ans %= mod;
        }
    }

    return dp[k][lastv][lasth] = ans;
}


class Solution {
public:
    int ways(vector<string>& pizza, int k) {
        memset(sum, 0, sizeof(sum));
        memset(dp, -1, sizeof(dp));
        sum[1][1] = pizza[0][0] == 'A';
        for (int i = 1; i < pizza[0].size(); i++)
        {
            sum[1][i + 1] = sum[1][i] + (pizza[0][i] == 'A');
        }

        for (int i = 1; i < pizza.size(); i++)
        {
            sum[i + 1][1] = sum[i][1] + (pizza[i][0] == 'A');
        }

        for (int i = 2; i <= pizza.size(); i++)
        {
            for (int j = 2; j <= pizza[0].size(); j++)
            {
                sum[i][j] = sum[i - 1][j] + sum[i][j - 1] + (pizza[i - 1][j - 1] == 'A') - sum[i - 1][j - 1];
            }
        }

        return dfs(k - 1, 1,1,pizza.size(), pizza[0].size());
    }
};