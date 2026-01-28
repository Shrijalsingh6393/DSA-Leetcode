class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int>m;

        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }

        for(auto el : m){
            if(m[el.first]>1){
                return true;
            }
            
        }
        return false;
    }
};