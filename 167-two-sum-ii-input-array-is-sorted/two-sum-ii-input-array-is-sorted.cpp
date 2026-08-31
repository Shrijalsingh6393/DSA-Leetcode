class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        while(s<e){
            if(nums[s]+nums[e]==target) return {s+1,e+1};
            if(nums[s]+nums[e]>target) e--;
            else s++;
        }
        return {};
    }
};