class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>m;
        for(int el : nums){
            m[el]++;
        }
        for(auto el:m){
            if(el.second>1){
                return el.first;
            }
        }
        return 0;
    }
};