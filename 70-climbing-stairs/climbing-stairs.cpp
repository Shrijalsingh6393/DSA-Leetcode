class Solution {
public:
    int climbStairs(int n) {
        if(n<=2){
            return n;
        }

        int a = 1;
        int b = 2;
        int current;

        for(int i=3;i<=n;i++){
            current = a+b;
            a = b;
            b = current; 
        }

        return current;
    }
};