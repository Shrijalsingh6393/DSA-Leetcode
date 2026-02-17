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
        vector<int>maxDigit(10,-1);

        for(int el : nums){
            int d = largestDigit(el);
            if(maxDigit[d]!=-1){
                ans = max(ans,el+maxDigit[d]);
            }
            maxDigit[d] = max(maxDigit[d],el);
        }

        return ans;
    }
};