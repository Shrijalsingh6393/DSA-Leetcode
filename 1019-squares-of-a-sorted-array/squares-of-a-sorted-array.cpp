class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        // for(int i=0;i<nums.size();i++){
        //     nums[i] = nums[i]*nums[i];
        // }

        // sort(nums.begin(),nums.end());

        // // int i = 0;
        // // int j = n-1;

        // // while(i<j){

        // // }

        // return nums;



        // int n = nums.size();
        // vector<int> result(n);
        // int l = 0, r = n - 1;
        // int pos = n - 1; // fill from the end

        // while (l <= r) {
        //     int leftSq = nums[l] * nums[l];
        //     int rightSq = nums[r] * nums[r];

        //     if (leftSq > rightSq) {
        //         result[pos] = leftSq;
        //         l++;
        //     } else {
        //         result[pos] = rightSq;
        //         r--;
        //     }
        //     pos--;
        // }
        // return result;

        int n = nums.size();

        for(int i=0;i<n;i++){
            nums[i] = nums[i]*nums[i];
        }

        sort(nums.begin(),nums.end());

        return nums;
    }
};