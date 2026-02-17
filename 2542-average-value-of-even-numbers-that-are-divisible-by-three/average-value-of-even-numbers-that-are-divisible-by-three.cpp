class Solution {
public:
    int averageValue(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%3==0 && nums[i]%2==0){
                v.push_back(nums[i]);
            }
        }
        int sum = 0;
        for(int i=0;i<v.size();i++){
            sum += v[i];
        }

        if(v.size()!=0){
            int avg = sum/v.size();
            return avg;
        }

        return 0;
    }
};