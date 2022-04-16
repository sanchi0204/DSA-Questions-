class Solution {
public:

    bool search(vector<vector<char>>& board, string& word, int i, int j, int idx)
    {
        if(idx==word.length()-1)
            return true;

        board[i][j]-=65;

        if(i>0 && board[i-1][j]==word[idx+1] && search(board,word,i-1,j,idx+1))
            return true;

         if(j>0 && board[i][j-1]==word[idx+1] && search(board,word,i,j-1,idx+1))
            return true;

           if(i+1<board.size() && board[i+1][j]==word[idx+1] && search(board,word,i+1,j,idx+1))
            return true;

           if(j+1<board[0].size() && board[i][j+1]==word[idx+1] && search(board,word,i,j+1,idx+1))
            return true;

        board[i][j]+=65;

        return false;

    }
    bool exist(vector<vector<char>>& board, string word) {

        int row=board.size();
        int col=board[0].size();

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(board[i][j]==word[0] && search(board,word,i,j,0))
                    return true;
            }
        }

        return false;

    }
};
