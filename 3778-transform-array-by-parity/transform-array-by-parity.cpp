class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;

        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                v.push_back(0);
            }
            else{
                v.push_back(1);
            }
        }
        sort(v.begin(),v.end());

        return v;
    }
};