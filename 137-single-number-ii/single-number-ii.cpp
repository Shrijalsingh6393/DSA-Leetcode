class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;

        // for (int i = 0; i < 32; i++) {
        //     int sum = 0;
        //     for (int num : nums) {
        //         if ((num >> i) & 1) {
        //             sum++;
        //         }
        //     }

        //     if (sum % 3 != 0) {
        //         result |= (1 << i);
        //     }
        // }

        // return result;

        unordered_map<int,int>m;

        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }

        for(auto el : m){
            if(el.second==1){
                return el.first;
            }
        }
        return -1;
    }
};