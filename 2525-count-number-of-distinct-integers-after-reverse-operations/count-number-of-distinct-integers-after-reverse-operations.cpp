class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        // int n = nums.size();
        // vector<int> arr(nums.begin(),nums.end());
        // unordered_set<int> s;

        // for(int i=0;i<n;i++){
        //     int rev = 0;
        //     while(arr[i]!=0){
        //         int ld = arr[i]%10;
        //         rev = rev*10 + ld;
        //         arr[i] = arr[i]/10;
        //     }
        //     nums.push_back(rev);
        // }

        // int count = 0;

        // for(int i=0;i<nums.size();i++){
        //     if(s.find(nums[i])==s.end()){
        //         s.insert(nums[i]);
        //         count++;
        //     }
        // }
        // return count;

        unordered_set<int> s;

        for (int x : nums) {
            s.insert(x);

            int rev = 0, temp = x;
            while (temp != 0) {
                rev = rev * 10 + (temp % 10);
                temp /= 10;
            }
            s.insert(rev);
        }

        return s.size();
    }
};