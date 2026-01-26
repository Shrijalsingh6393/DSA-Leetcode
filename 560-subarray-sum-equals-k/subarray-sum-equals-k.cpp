class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int cs = 0;
        int count = 0;

        for(int i = 0; i < n; i++){
            cs = cs + nums[i];

            if(cs == k){
                count++;
            }

            // check previous subarrays ending at i
            int temp = cs;
            for(int j = 0; j < i; j++){
                temp -= nums[j];
                if(temp == k){
                    count++;
                }
            }
        }
        return count;
    }
};