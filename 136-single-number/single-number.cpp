class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // int ans=0;
        // for(int val : nums){
        //     ans = ans ^ val;
        // }
        // return ans;
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