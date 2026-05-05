class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        int count = 0;

        for(int el : nums){
            if(el==0){
                count++;
            }
        }

        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[k++] = nums[i];
            }
        }

        for(int i=0;i<count;i++){
            nums[k++] = 0;
        }
    }
};