class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int>m;
        
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }

        int maxf = 0; 
        int ans = -1;
        for(auto el : m){
            int val = el.first;
            int freq = el.second;

            if(val % 2 == 0) {
                if(freq > maxf || (freq == maxf && val < ans)) {
                    maxf = freq;
                    ans = val;
                }
            }
        }

        return ans;
    }
};