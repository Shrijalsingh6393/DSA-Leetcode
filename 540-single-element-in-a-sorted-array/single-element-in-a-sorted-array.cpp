class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int el : nums){
            ans = ans^el;
        }
        return ans;
    }
};