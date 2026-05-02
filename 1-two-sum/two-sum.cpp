class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 1st
        // int n = nums.size();
    
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {};


        //2nd

        int n = nums.size();
        vector<pair<int,int>>v;

        for(int i=0;i<n;i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        int s = 0;
        int e = n-1;

        while(s<e){
            int sum = v[s].first+v[e].first;
            if(sum==target){
                return {v[s].second,v[e].second};
            }
            else if(sum>target){
                e--;
            }
            else{
                s++;
            }
        }
        return {};
    }
};