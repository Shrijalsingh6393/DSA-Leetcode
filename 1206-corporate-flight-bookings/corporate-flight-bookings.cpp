class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& nums, int n) {
        int s = nums.size();

        vector<int> ans(n,0);

        for(int i=0;i<s;i++){
            int l = nums[i][0] - 1;   // start flight (0-based)
            int r = nums[i][1] - 1;   // end flight
            int seats = nums[i][2];

            ans[l] += seats;
            if(r + 1 < n)
                ans[r + 1] -= seats;
        }

        for(int i = 1; i < n; i++) {
            ans[i] += ans[i - 1];
        }

        return ans;
    }
};