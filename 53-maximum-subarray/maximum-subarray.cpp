class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int cs = 0;
        int maxSum = INT_MIN;

        for(int i=0;i<n;i++){
            cs += nums[i];
            maxSum = max(maxSum,cs);
            if(cs<0){
                cs = 0;
            }
        }
        return maxSum;
    }
};