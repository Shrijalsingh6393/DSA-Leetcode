class Solution {
public:
    bool DFS(vector<vector<int>>& grid1, vector<vector<int>>& grid2,int i,int j){
        if(i<0 || j<0 || i>=grid2.size() || j>=grid2[0].size() || grid2[i][j]==0){
            return true;
        }
        grid2[i][j] = 0;
        bool valid = grid1[i][j]==1;
        valid &= DFS(grid1,grid2,i+1,j);
        valid &= DFS(grid1,grid2,i,j+1);
        valid &= DFS(grid1,grid2,i-1,j);
        valid &= DFS(grid1,grid2,i,j-1);
        return valid;
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n = grid2.size();
        int m = grid2[0].size();
        int ans = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid2[i][j]==1){
                    if(DFS(grid1,grid2,i,j)){ans++;}
                }
            }
        }
        return ans;
    }
};