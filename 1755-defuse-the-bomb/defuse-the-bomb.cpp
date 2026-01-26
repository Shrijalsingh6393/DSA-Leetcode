class Solution {
public:
    vector<int> decrypt(vector<int>&nums, int k) {
        int n = nums.size();
        vector<int>ans(n,0);

        if(k==0){
            return ans;
        }

        for(int i=0;i<n;i++){
            int sum=0;

            if(k>0){
                for(int j=1;j<=k;j++){
                    sum = sum + nums[(i+j)%n];
                }
            }
            if(k<0){
                for(int j=1;j<=-k;j++){
                    sum = sum + nums[(i-j+n)%n];
                }
            }
            ans[i]=sum;
        }
        return ans;
    }
};