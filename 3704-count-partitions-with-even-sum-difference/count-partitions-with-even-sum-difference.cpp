class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int sum1 = 0;
        for(int i=0;i<n-1;i++){
            sum1 = sum1+nums[i];
            int sum2 = 0;
            for(int j=i+1;j<n;j++){
                sum2 = sum2 + nums[j];
            }
            if((sum1-sum2) % 2 == 0) count++;
        }

        return count;
    }
};