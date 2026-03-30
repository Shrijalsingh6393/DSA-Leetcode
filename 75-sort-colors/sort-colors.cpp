class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int countZ=0;
        int countO=0;
        int countT=0;

        for(int i=0;i<n;i++){
            if(nums[i]==0){countZ++;}
            if(nums[i]==1){countO++;}
            if(nums[i]==2){countT++;}
        }
        int index=0;
        for(int i=0;i<countZ;i++){
            nums[index++] = 0;
        }
        for(int i=0;i<countO;i++){
            nums[index++] = 1;
        }
        for(int i=0;i<countT;i++){
            nums[index++] = 2;
        }
    }
};