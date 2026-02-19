class Solution {
public:
    int findCircleNum(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        vector<bool>visited(n,false);
        queue<int>q;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                ans++;
                q.push(i);
                visited[i] = true;
                while(!q.empty()){
                    int curr = q.front();
                    q.pop();
                    for(int j=0;j<n;j++){
                        if(nums[curr][j]==1 && !visited[j]){
                            q.push(j);
                            visited[j] = true;
                        }
                    }
                }
            }
        }
        return ans;
    }
};