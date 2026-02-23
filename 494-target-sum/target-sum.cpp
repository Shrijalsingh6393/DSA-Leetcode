class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int totalSum = 0;
        for (int num : nums)
            totalSum += num;

        if (abs(target) > totalSum) return 0;
        if ((target + totalSum) % 2 != 0) return 0;

        int P = (target + totalSum) / 2;

        vector<long long> dp(P + 1, 0);
        dp[0] = 1;

        for (int num : nums) {
            for (int j = P; j >= num; j--) {
                dp[j] += dp[j - num];
            }
        }

        return dp[P];
    }
};