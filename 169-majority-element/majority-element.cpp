class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        
        // int freq = 0;
        // int ans = 0;

        // for(int i=0;i<n;i++){
        //     if(freq == 0){
        //         ans = nums[i];
        //     }
        //     if(ans == nums[i]){
        //         freq++;
        //     }
        //     else{
        //         freq--;
        //     }
        // }
        // return ans;

        // unordered_map<int,int>m;

        // for(int i=0;i<n;i++){
        //     m[nums[i]]++;
        // }

        // for(int i=0;i<n;i++){
        //     if(m[nums[i]]>n/2){
        //         return nums[i];
        //     }
        // }
        // return -1;

        unordered_map<int,int>m;

        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }

        for(auto el : m){
            if(el.second>n/2){
                return el.first;
            }
        }
        return -1;
    }
};