class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        mp.insert({0,1});

        int cs = 0;
        int count = 0;

        for(int i=0;i<n;i++){
            cs += nums[i];

            if(mp.find(cs-k)!=mp.end()){
                count += mp[cs-k];
            }
            mp[cs]++;
        }
        return count;
    }
};