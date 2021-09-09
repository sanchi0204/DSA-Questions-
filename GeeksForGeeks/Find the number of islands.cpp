class Solution {
  public:
    // Function to find the number of islands.

    void DFS(vector<vector<char>>&grid, int i, int j, int row, int col)
    {
        if(i>=row || i<0 || j>=col || j<0 || grid[i][j]!='1')
            return;

        grid[i][j]='2';

        DFS(grid,i+1,j,row,col);
        DFS(grid,i,j+1,row,col);
        DFS(grid,i-1,j,row,col);
        DFS(grid,i,j-1,row,col);
        DFS(grid, i+1,j+1,row,col);
        DFS(grid,i-1,j-1,row,col);
        DFS(grid,i+1,j-1,row,col);
        DFS(grid,i-1,j+1,row,col);

    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here

        int row=grid.size();
        int col = grid[0].size();

        int count=0;

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]=='1')
                    {
                    DFS(grid,i,j,row,col);
                    count++;
                    }
            }
        }

        return count;
    }
};
