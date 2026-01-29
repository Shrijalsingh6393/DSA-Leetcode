class Solution {
public:
    // int func(vector<int>&cost,int n,int i){
    //     if(i>=n){
    //         return 0;
    //     }
    //     return cost[i] + min(func(cost,n,i+1),func(cost,n,i+2));
    // }

    int minCostClimbingStairs(vector<int>& cost) {
        // int n = cost.size();
        // return min(func(cost,n,0),func(cost,n,1));

        int n = cost.size();

        vector<int>v(n);

        v[0] = cost[0];
        v[1] = cost[1];

        for(int i=2;i<n;i++){
            v[i] = cost[i] + min(v[i-1],v[i-2]); 
        }

        return min(v[n-1],v[n-2]);
    }
};