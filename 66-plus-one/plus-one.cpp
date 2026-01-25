class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        int n = v.size();

        for(int i=n-1;i>=0;i--){
            v[i] = v[i]+1;
            if(v[i]<10){
                return v;
            }
            else{
                v[i] = 0;
            }
        }
        v.insert(v.begin(),1);
        return v;
    }
};