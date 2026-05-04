class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // int n = nums.size();
        // unordered_map<int,int>mp;

        // for(int el : nums){
        //     mp[el]++;
        // }

        // for(auto i : mp){
        //     if(i.second==1) return i.first;
        // }

        // return -1;

        int ans = 0;

        for(int el : nums){
            ans = ans^el;
        }

        return ans;
    }
};