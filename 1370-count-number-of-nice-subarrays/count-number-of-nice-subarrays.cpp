class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int cs = 0;
        int count = 0;

        unordered_map<int,int>m;
        m.insert({0,1});

        for(int i=0;i<n;i++){
            if(nums[i]%2==1){
                cs++;
            }
            if(m.find(cs-k)!=m.end()){
                count+=m[cs-k];
            }
            m[cs]++;
        }
        return count;
    }
};