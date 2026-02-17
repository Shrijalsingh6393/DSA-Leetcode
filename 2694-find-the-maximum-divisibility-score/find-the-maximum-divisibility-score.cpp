class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        
        int n = nums.size();
        int m = divisors.size();
        vector<int>ans;
        int maxC = -1;
        int res;

        for(int i=0;i<m;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(nums[j]%divisors[i]==0){
                    count++;
                }
            }
            if(count>maxC){
                maxC = count;
                res = divisors[i];
            }
            else if(count==maxC){
                res = min(res,divisors[i]);
            }
        }
        return res;
    }
};