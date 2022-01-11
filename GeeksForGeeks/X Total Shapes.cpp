class Solution
{
    public:

    void dfs(vector<vector<char>>& grid, int x, int y, int row, int col)
    {
        if(x<0 || x>=row || y<0 || y>=col || grid[x][y]!='X')
            return;

        grid[x][y]='O';

        dfs(grid,x+1,y,row,col);
         dfs(grid,x-1,y,row,col);
          dfs(grid,x,y-1,row,col);
           dfs(grid,x,y+1,row,col);
    }
    //Function to find the number of 'X' total shapes.
    int xShape(vector<vector<char>>& grid)
    {
        // Code here
        int row=grid.size();
        int col=grid[0].size();

        int count=0;

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]=='X')
                {
                    dfs(grid,i,j,row,col);
                    count++;
                }
            }
        }

        return count;
    }
};
