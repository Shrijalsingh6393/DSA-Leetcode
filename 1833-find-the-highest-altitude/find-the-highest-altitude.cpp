class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int>v;
        v.push_back(0);

        for(int i=0;i<n;i++){
            v.push_back(v[i]+gain[i]);
        }

        int maxel = v[0];
        for(int i=0;i<v.size();i++){
            if(v[i]>maxel){
                maxel = v[i];
            }
        }
        return maxel;
    }
};