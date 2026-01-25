class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();

        int e=1;

        int sum = nums[0];

        vector<int> v;

        v.push_back(nums[0]);

        while(e<n){
            sum = sum + nums[e];
            v.push_back(sum);
            e++;
        }
        return v;
    }
};