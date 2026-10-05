class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<int,int> row[9];
        map<int,int> col[9];
        map<int,int> grid[9];
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j]=='.')
                continue;
            int num=board[i][j]-'0';
            if(row[i][num]==1)
            return false;
            if(col[j][num]==1)
            return false;
            int g=(i/3)*3+(j/3);
            if(grid[g][num]==1)
            return false;
            row[i][num]=1;
            col[j][num]=1;
            grid[g][num]=1;
            }
        }
        return true;
    }
};