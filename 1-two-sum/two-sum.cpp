class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int a = target - nums[i];
            if(mp.find(a)!=mp.end()) return {mp[a],i};
            mp[nums[i]] = i;
        }

        return {};
    }
};