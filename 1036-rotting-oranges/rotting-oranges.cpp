class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>visited = grid;
        queue<pair<int,int>>q;
        int countFresh = 0;
        int minutes = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(visited[i][j]==2){
                    q.push({i,j});
                }
                if(visited[i][j]==1){
                    countFresh++;
                }
            }
        }
        int dx[4] = {1,-1,0,0};
        int dy[4] = {0,0,1,-1};
        while(!q.empty() && countFresh > 0){
            int size = q.size();
            minutes++;
            for(int i=0;i<size;i++){
                pair<int,int>curr = q.front();
                q.pop();
                for(int j=0;j<4;j++){
                    int x = curr.first + dx[j];
                    int y = curr.second + dy[j];

                    if(x>=0 && y>=0 && x<m && y<n && visited[x][y]==1){
                        visited[x][y] = 2;
                        countFresh--;
                        q.push({x,y});
                    }
                }
            }
        }
        if(countFresh == 0) return minutes;
        return -1;
    }
};