class Solution {
public:
    int largestDigit(int x){
        int maxD = INT_MIN;
        while(x!=0){
            int ld = x%10;
            maxD = max(maxD,ld);
            x = x/10;
        }
        return maxD;
    }
    int maxSum(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        for(int i=0;i<n;i++){
            int max1 = largestDigit(nums[i]);
            for(int j=i+1;j<n;j++){
                int max2 = largestDigit(nums[j]);

                if(max1==max2){
                    ans = max(ans,nums[i]+nums[j]);
                }
            }
        }

        return ans;
    }
};