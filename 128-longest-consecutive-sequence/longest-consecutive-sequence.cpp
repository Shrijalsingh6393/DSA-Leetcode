class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int n = nums.size();
        int longest = 0;
        for(int el:s){
            if(s.find(el-1)==s.end()){
                int current = el;
                int length = 1;

                while(s.find(current+1)!=s.end()){
                    current++;
                    length++;
                }

                longest = max(longest,length);
            }
        }
        return longest;
    }
};