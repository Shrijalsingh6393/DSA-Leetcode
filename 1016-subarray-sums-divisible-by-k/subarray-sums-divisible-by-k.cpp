class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>m;
        m[0] = 1;
        int cs = 0;
        int count = 0;

        for(int i=0;i<n;i++){
            cs += nums[i];
            int r = ((cs%k)+k)%k;
            if(m.find(r)!=m.end()){
                count+=m[r];
            } 
            m[r]++;
        }
        return count;
    }
};