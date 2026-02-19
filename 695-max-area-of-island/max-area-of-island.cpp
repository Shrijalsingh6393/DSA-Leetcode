class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i,int j,int& count){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0){
            return;
        }
        count++;
        grid[i][j]=0;
        dfs(grid,i+1,j,count);
        dfs(grid,i,j+1,count);
        dfs(grid,i-1,j,count);
        dfs(grid,i,j-1,count);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int>ans;
        int maxA = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int count=0;
                if(grid[i][j]==1){
                    dfs(grid,i,j,count);
                    maxA = max(maxA,count);
                }
            }
        }
        return maxA;
    }
};