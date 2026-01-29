class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        unordered_map<int,int>m;
        m[0] = 1;

        int cs=0;
        int count=0;

        for(int i=0;i<n;i++){
            cs += nums[i];

            if(m.find(cs-goal)!=m.end()){
                count += m[cs-goal];
            }

            m[cs]++;
        }
        return count;
    }
};