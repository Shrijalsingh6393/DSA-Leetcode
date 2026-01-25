class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;

        // 1️⃣ find pivot
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        // 2️⃣ swap with next greater element
        if (i >= 0) {
            int j = n - 1;
            while (nums[j] <= nums[i]) {
                j--;
            }
            swap(nums[i], nums[j]);
        }

        // 3️⃣ reverse the suffix
        reverse(nums.begin() + i + 1, nums.end());
    }
};