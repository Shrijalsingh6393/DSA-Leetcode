class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n = nums.size();
        int sumSingle = 0;
        int sumDouble = 0;

        for(int i=0;i<n;i++){
            int count = 0;
            int temp = nums[i];
            while(temp!=0){
                int ld = temp%10;
                count++;
                temp = temp/10;
            }
            if(count==1){
                sumSingle += nums[i];
            }
            if(count==2){
                sumDouble += nums[i];
            }
        }
        if(sumSingle > sumDouble || sumDouble>sumSingle){
            return true;
        }
        return false;
    }
};