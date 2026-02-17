class Solution {
public:
    int func(vector<int>&dp,int n){
        if(n==0 || n==1){
            return dp[n]=n;
        }
        // int x;
        // if(dp[n-1]!=-1){x=dp[n-1];}
        // else{x = func(dp,n-1);}
        // int y;
        // if(dp[n-2]!=-1){y = dp[n-2];}
        // else{y = func(dp,n-2);}

        if(dp[n]!=-1){return dp[n];}
        int x = func(dp,n-1);
        int y = func(dp,n-2);

        return dp[n]=x+y;
    }

    int fib(int n) {
        // if(n==0 || n==1){
        //     return n;
        // }
        // int x = fib(n-1);
        // int y = fib(n-2);

        // return x+y;

        vector<int>dp(n+1,-1);

        return func(dp,n);
    }
};