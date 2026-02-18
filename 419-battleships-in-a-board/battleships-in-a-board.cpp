class Solution {
public:
    void DFS(vector<vector<char>>& board,int i,int j){
        if(i<0 || j<0 || j>=board[0].size() || i>=board.size() || board[i][j]=='.'){
            return;
        }
        board[i][j]='.';
        DFS(board,i+1,j);
        DFS(board,i,j+1);
        DFS(board,i-1,j);
        DFS(board,i,j-1);
    }
    int countBattleships(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        int ans = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='X'){
                    DFS(board,i,j);
                    ans++;
                }
            }
        }
        return ans;
    }
};