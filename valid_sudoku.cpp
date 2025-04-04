class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            int cnt = 9;
            vector<vector<bool>> row(9, vector<bool>(9, 0));
    
            vector<vector<bool>> col(9, vector<bool>(9, 0));
            vector<vector<bool>> sub(9, vector<bool>(9, 0));
    
            for (int r = 0; r < cnt; ++r) {
                for (int c = 0; c < cnt; ++c) {
                    if (board[r][c] == '.')
                        continue;
    
                    int idx = board[r][c] - '0' - 1;
                    int area = (r / 3) * 3 + (c / 3);
    
                    if (row[r][idx] || col[c][idx] || sub[area][idx]) {
                        return false;
                    }
    
                    row[r][idx] = true;
                    col[c][idx] = true;
                    sub[area][idx] = true;
                }
            }
            return true;
        }
    };