class Solution {
public:

    bool isSafe(int row, int col, char num,vector<vector<char>>& board)
    {
        for(int i=0;i<9;i++)
        {
            if(board[i][col]==num || board[row][i]==num)
            {
                return false;
            }
        }

        int rowStart=row-row%3;
        int colStart=col-col%3;

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(board[i+rowStart][j+colStart]==num)
                    return false;
            }
        }

        return true;
    }
    bool solve(vector<vector<char>>& board, int row, int col)
    {
        if(row==9)
            return true;

        if(col==9)
            return solve(board,row+1,0);

        if(board[row][col]!='.')
            return solve(board,row,col+1);


        for(char i='1';i<='9';i++)
        {
            if(isSafe(row,col,i,board))
            {
                 board[row][col]=i;

                if(solve(board,row,col+1))
                    return true;

                board[row][col]='.';

            }

        }

        return false;

    }

    void solveSudoku(vector<vector<char>>& board) {

        solve(board,0,0);

    }
};
