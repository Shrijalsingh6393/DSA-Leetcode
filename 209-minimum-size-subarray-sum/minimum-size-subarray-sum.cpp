class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int st = 0,sum = 0,minLen = INT_MAX;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            while(sum>=target){
                minLen = min(minLen,i-st+1);
                sum -= nums[st];
                st++;
            }
        }
        return (minLen==INT_MAX)?0:minLen;
    }
};