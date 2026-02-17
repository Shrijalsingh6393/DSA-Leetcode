class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s1(nums1.begin(),nums1.end());
        unordered_set<int>s2;

        for(int el : nums2){
            if(s1.count(el)){
                s2.insert(el);
            }
        }
        vector<int>ans(s2.begin(),s2.end());
        sort(ans.begin(),ans.end());

        return ans;
    }
};