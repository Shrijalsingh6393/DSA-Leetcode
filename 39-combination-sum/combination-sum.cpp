class Solution {
public:
    vector<vector<int>>ans;
    void func(vector<int>&nums,int t,vector<int>&temp,int index){
        if(t==0){
            ans.push_back(temp);
            return;
        }

        for(int i=index;i<nums.size();i++){
            if(nums[i]<=t){
                temp.push_back(nums[i]);
                func(nums,t-nums[i],temp,i);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>temp;
        func(nums,target,temp,0);
        return ans;
    }
};