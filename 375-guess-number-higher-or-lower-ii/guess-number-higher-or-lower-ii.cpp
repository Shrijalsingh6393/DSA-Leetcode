class Solution {
public:
    int getMoneyAmount(int n) {
        int dp[205][205] = {0};

        for(int len = 2; len <= n; len++) {
            for(int l = 1; l <= n - len + 1; l++) {
                int r = l + len - 1;
                dp[l][r] = INT_MAX;

                for(int x = l; x <= r; x++) {
                    int left = (x > l) ? dp[l][x-1] : 0;
                    int right = (x < r) ? dp[x+1][r] : 0;

                    int cost = x + max(left, right);
                    dp[l][r] = min(dp[l][r], cost);
                }
            }
        }

        return dp[1][n];
    }
};