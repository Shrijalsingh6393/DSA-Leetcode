class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rev1=0;
        int m = num;
        while(num!=0){
            int ld = num%10;
            rev1 = rev1*10 + ld;
            num = num/10;
        }

        int rev2=0;
        int r = rev1;
        while(rev1!=0){
            int ld = rev1%10;
            rev2 = rev2*10 + ld;
            rev1 = rev1/10;
        }
        if(m==rev2){
            return true;
        }
        return false;
    }
};