class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int minel = INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]<minel){
                minel = nums[i];
            }
        }
        return minel;
    }
};