class Solution {
public:
    double myPow(double x, int n) {
        // return pow(x,n);
        long long m = n;
        if(m<0){
            x = 1/x;
            m = -m;
        } 

        double ans = 1;

        while(m>0){
            if(m%2==1){
                ans = ans*x;
            }
            x = x*x;
            m = m/2;
        }

        return ans;
    }
};