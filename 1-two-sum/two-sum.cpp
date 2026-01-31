class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>m;

        for(int i=0;i<n;i++){
            int first = nums[i];
            int sec = target-nums[i];
            if(m.find(sec)!=m.end()){
                return {m[sec],i};
            }
            
            m[first]=i;
        }
        return {};
    }
};