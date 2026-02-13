class Solution {
public:
    int count = 0;
    void func(int n,int pos,vector<int>&v){
        if(pos>n){
            count++;
            return;
        }
        for(int i=1;i<=n;i++){
            if(!v[i] && (i%pos==0 || pos%i==0)){
                v[i] = 1;
                func(n,pos+1,v);
                v[i] = 0;
            }
        }
    }
    int countArrangement(int n) {
        vector<int>v(n+1,0);
        func(n,1,v);
        return count;
    }
};