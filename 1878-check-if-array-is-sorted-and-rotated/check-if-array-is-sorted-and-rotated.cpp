class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int>b(n);
        int pos = 0;
        int count=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                count++;
                pos = i+1;
            }
        }

        if(count>1){return false;}

        for(int i=0;i<n;i++){
            b[i] = nums[(i+pos)%n];
        }

        for(int i=0;i<n-1;i++){
            if(b[i]>b[i+1]){
                return false;
            }
        }
        return true;
    }
};