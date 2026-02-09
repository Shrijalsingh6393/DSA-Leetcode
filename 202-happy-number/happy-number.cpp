class Solution {
public:
    int isHappy1(int n){
        if(n==0){
            return 0;
        }
        int ld = n%10;
        return isHappy1(n/10)+(ld*ld);
    }
    bool isHappy(int n) {
        unordered_set<int> s;   

        while(n != 1 && s.find(n) == s.end()) {
            s.insert(n);
            n = isHappy1(n);
        }
        return n==1;
    }
};