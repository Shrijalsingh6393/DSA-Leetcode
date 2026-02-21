class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++) {
            unordered_set<char> s;
            for(int j = 0; j < 9; j++) {
                if(board[i][j] == '.') continue;
                if(s.count(board[i][j])) return false;
                s.insert(board[i][j]);
            }
        }

        for(int j = 0; j < 9; j++) {
            unordered_set<char> s;
            for(int i = 0; i < 9; i++) {
                if(board[i][j] == '.') continue;
                if(s.count(board[i][j])) return false;
                s.insert(board[i][j]);
            }
        }

        for(int boxRow = 0; boxRow < 9; boxRow += 3) {
            for(int boxCol = 0; boxCol < 9; boxCol += 3) {

                unordered_set<char> s;

                for(int i = 0; i < 3; i++) {
                    for(int j = 0; j < 3; j++) {
                        char val = board[boxRow + i][boxCol + j];
                        if(val == '.') continue;
                        if(s.count(val)) return false;
                        s.insert(val);
                    }
                }
            }
        }

        return true;
    }
};