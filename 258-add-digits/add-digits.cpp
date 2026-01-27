class Solution {
public:
    int addDigits1(int num){
        if(num==0){
            return 0;
        }
        int ld = num%10;
        return addDigits(num/10) + ld;
    }
    int addDigits(int num) {
        if (num < 10) {
            return num;
        }
        return addDigits(addDigits1(num));
    }
};