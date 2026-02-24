class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int cs = 0;
    
        for(int i=0;i<k;i++){
            cs += nums[i]; 
        }
        int maxS = cs;
        int j=0;
        for(int i=k;i<n;i++){
            cs = cs + nums[i];
            cs -= nums[j]; 
            maxS = max(maxS,cs);
            j++;
    }

    double avg = double(maxS)/k;

    return avg;
    }
};