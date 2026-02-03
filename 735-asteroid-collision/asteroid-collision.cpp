class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        int n = nums.size();
        stack<int>s;
        for(int i=0;i<n;i++){
            while(!s.empty() && s.top()>0 && nums[i]<0){
                if(s.top()<-nums[i]){
                    s.pop();
                }
                else if(s.top() == -nums[i]) { 
                    s.pop(); 
                    nums[i] = 0; 
                }
                else { 
                    nums[i] = 0; 
                }
            }
            if(nums[i] != 0) s.push(nums[i]);
        }
        

        vector<int>ans;

        while(!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(), ans.end());

        return ans;
    }
};