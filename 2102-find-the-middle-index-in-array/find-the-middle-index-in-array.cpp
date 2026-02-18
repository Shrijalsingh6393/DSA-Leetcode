class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int>sum1(n,0);
        vector<int>sum2(n,0);

        for(int i=1;i<n;i++){
            sum1[i] = sum1[i-1] + nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            sum2[i] = sum2[i+1] + nums[i+1];
        }

        for(int i=0;i<n;i++){
            if(sum1[i]==sum2[i]){
                return i;
            }
        }
        return -1;
    }
};