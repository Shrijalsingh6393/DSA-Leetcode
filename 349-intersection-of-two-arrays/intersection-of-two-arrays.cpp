class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        unordered_set<int>s;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    s.insert(nums1[i]);
                }
            }
        }
        vector<int>ans;
        for(auto el : s){
            ans.push_back(el);
        }

        sort(ans.begin(),ans.end());

        return ans;
    }
};