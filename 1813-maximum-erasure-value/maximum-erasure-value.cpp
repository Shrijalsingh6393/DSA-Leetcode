class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>s;
        int j=0;
        int currS = 0;
        int maxS = 0;

        for(int i=0;i<n;i++){
            while(s.find(nums[i])!=s.end()){
                s.erase(nums[j]);
                currS -= nums[j];
                j++;
            }
            s.insert(nums[i]);
            currS += nums[i];
            maxS = max(maxS, currS);
        }

        return maxS;
    }
};