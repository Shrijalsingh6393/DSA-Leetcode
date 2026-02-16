class Solution {
public:
    int climbStairs(int n) {
        if(n<=3){
            return n;
        }
        int a = 2;
        int b = 3;
        int curr;

        for(int i=4;i<=n;i++){
            curr = a+b;
            a = b;
            b = curr;
        }
        return curr;
    }
};