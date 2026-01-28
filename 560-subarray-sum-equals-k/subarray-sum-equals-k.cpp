class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = 1;   

        int cs = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++){
            cs += nums[i];

            if(mp.find(cs - k) != mp.end()){
                count += mp[cs - k];
            }

            mp[cs]++;
        }

        return count;
    }
};



// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int n = nums.size();
//         int c=0;
//         for(int i=0;i<n;i++){
//             int sum = 0;
//             for (int j = i; j < n; j++) {
//                 sum += nums[j];
//                 if (sum == k) {
//                     c++;
//                 }
//             }
//         }
//         return c;
//     }
// };