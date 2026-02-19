class Solution {
public:
    void dfs(int i,vector<vector<int>>&adj,vector<int>&visited){
        visited[i] = 1;

        for(int x:adj[i]){
            if(!visited[x]){
                dfs(x,adj,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<vector<int>>adj(n);

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[i][j] == 1 && i!=j){
                    adj[i].push_back(j);
                }
            }
        }

        vector<int>visited(n,0);
        int provinces = 0;

        for(int i=0;i<n;i++){
            if(!visited[i]){
                provinces++;
                dfs(i,adj,visited);
            }
        }
        return provinces;
    }
};