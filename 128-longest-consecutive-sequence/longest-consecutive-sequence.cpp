class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        int longest = 0;
        if(nums.empty()) return 0;
        for(int i : nums){
            s.insert(i);
        }
        for(int i : s){
            if(s.find(i-1) == s.end()){
                int current = i;
                int count = 1;

                while(s.find(current+1) != s.end()){
                    current++;
                    count++;
                }

                longest = max(longest, count);
            }

        }
        return longest;
    }
};