class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefix(n);
        vector<int>suffix(n);
        vector<int>ans(n);
        unordered_set<int>s;
        
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
            prefix[i] = s.size();
        }

        s.clear();

        for(int i=n-1;i>=0;i--){
            suffix[i] = s.size();
            s.insert(nums[i]);
        }

        for(int i = 0; i < n; i++) {
            ans[i] = prefix[i] - suffix[i];
        }

        return ans;
    }
};