class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int cs = 0;
        int MS = INT_MIN;

        for(int i=0;i<n;i++){
            cs = cs + nums[i];
            MS = max(MS,cs);
            if(cs<0){
                cs = 0;
            }
        }
        return MS;
    }
};