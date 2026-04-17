class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(),nums.end());

        int maxDiff = 0;

        int i = 0;
        int j = i+1;
        while(i<n && j<n){
            int diff = nums[j] - nums[i];
            maxDiff = max(diff,maxDiff);
            i++;
            j++;
        }

        return maxDiff;
    }
};